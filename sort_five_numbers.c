/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:01:32 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/20 12:44:45 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five_numbers(t_stack **a_stack, t_stack **b_stack)
{
	int		min_index;
	int		num_elem;

	num_elem = 2;
	while (num_elem)
	{
		min_index = 0;
		find_min_index(a_stack, &min_index);
		if (min_index< ft_stacksize(*a_stack) / 2)
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
		num_elem--;
	}
	ft_sort_three_numbers(a_stack);
	push_a(a_stack, b_stack);
	push_a(a_stack, b_stack);
}
