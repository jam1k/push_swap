/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:44:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/16 15:24:29 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four_numbers(t_stack **a_stack, t_stack **b_stack)
{
	int		min_index;

	min_index = 0;
	find_min_index(a_stack, &min_index);
	if (min_index < 2)
	{
		while (min_index)
		{
			rotate_a(a_stack);
			min_index--;
		}
	}
	else
	{
		while (min_index < ft_stacksize(*a_stack))
		{
			reverse_rotate_a(a_stack);
			min_index++;
		}
	}
	push_b(a_stack, b_stack);
	print_list(*a_stack);
	print_list(*b_stack);
	ft_sort_three_numbers(a_stack);

	//push_a(a_stack, b_stack);
	if (stack_is_sorted(a_stack))
		return ;
}
