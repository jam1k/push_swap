/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 09:36:56 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (argc >= 3)
	{
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
	}
	return (a_stack);
}

static int	apply_sorting(t_stack **a_stack, t_stack **b_stack)
{
	if (stack_is_sorted(a_stack))
		return (0);
	else if (ft_stacksize(*a_stack) == 2)
		ft_sort_two_numbers(a_stack);
	else if (ft_stacksize(*a_stack) == 3)
		ft_sort_three_numbers(a_stack);
	else if (ft_stacksize(*a_stack) == 4)
		ft_sort_four_numbers(a_stack, b_stack);
	else if (ft_stacksize(*a_stack) == 5)
		ft_sort_five_numbers(a_stack, b_stack);
	else
		ft_sort_more_numbers(a_stack, b_stack);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (argc < 2)
		return (1);
	if (!error_handling(argc, argv))
		return (2);
	if (argc == 2)
		a_stack = read_the_input(argc, ft_split(argv[1], ' '));
	else
		a_stack = read_the_input(argc, argv);
	if (!a_stack)
		return (3);
	b_stack = ft_stacknew(20);
	ft_stackadd_back(&b_stack, ft_stacknew(40));
	apply_sorting(&a_stack, &b_stack);
	//print_list(a_stack);
	return (0);
}
