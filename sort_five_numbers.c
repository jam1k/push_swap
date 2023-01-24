/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:01:32 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 09:41:36 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five_numbers(t_stack **a_stack, t_stack **b_stack)
{
	int		num_elem;

	num_elem = 2;
	while (num_elem)
	{
		rotate_or_reverse_rotate(a_stack);
		push_b(a_stack, b_stack);
		num_elem--;
	}
	ft_sort_three_numbers(a_stack);
	push_a(a_stack, b_stack);
	push_a(a_stack, b_stack);
}
