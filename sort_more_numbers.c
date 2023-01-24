/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:57:41 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 10:24:12 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_more_helper(t_stack **a_stack, t_stack **b_stack, int num_elem)
{
	while (num_elem)
	{
		rotate_or_reverse_rotate(a_stack);
		push_b(a_stack, b_stack);
		num_elem--;
	}
}

void	ft_sort_more_numbers(t_stack **a_stack, t_stack **b_stack)
{
	int		num_elem;

	num_elem = ft_stacksize(*a_stack) - 3;
	sort_more_helper(a_stack, b_stack, num_elem);
	ft_sort_three_numbers(a_stack);
	while (num_elem)
	{
		push_a(a_stack, b_stack);
		num_elem--;
	}
}
