/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 11:03:16 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_digit(int argc, char **argv)
/* check that parameters are digits*/
{
	int	i;
	int	j;
	int	len;
	int	val;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (j < len)
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		val = ft_atoi(argv[i]);
		if (val < -2147483648 || val > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

static int	error_handling(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!is_digit(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
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
	b_stack = ft_stacknew(40);
	ft_stackadd_front(&b_stack, ft_stacknew(20));
	ft_printf("initial b_stack\n");
	print_list(b_stack);
	while (b_stack)
	{
		ft_printf("%d\n", b_stack->index);
		b_stack = b_stack->next;
	}
	return (0);
}
