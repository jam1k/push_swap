/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/09 15:58:13 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	error_handling(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!ft_atoi(argv[i]) || ft_atoi(argv[i]) < 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

static int	check_duplicates(t_stack *a_stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!a_stack)
		return (0);
	current = a_stack;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (current->content == next->content)
				return (0);
			next = next->next;
		}
		current = current->next;
	}
	return (1);
}

static t_stack	*read_the_input(int argc, char **argv)
{
	t_stack	*new_node;
	t_stack	*a_stack;
	int		i;

	a_stack = ft_stacknew(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		new_node = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&a_stack, new_node);
		i++;
	}
	if (!check_duplicates(a_stack))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (a_stack);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;


	if (!error_handling(argc, argv))
		return (1);
	a_stack = read_the_input(argc, argv);
	if (!a_stack)
		return (2);

	b_stack = ft_stacknew(3);
	ft_stackadd_back(&b_stack, ft_stacknew(1));
	swap_a_b(&a_stack, &b_stack);
	print_list(a_stack);
	print_list(b_stack);
	return (0);
}
