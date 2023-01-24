/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:44:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 09:37:56 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four_numbers(t_stack **a_stack, t_stack **b_stack)
{
	rotate_or_reverse_rotate(a_stack);
	push_b(a_stack, b_stack);
	ft_sort_three_numbers(a_stack);
	push_a(a_stack, b_stack);
	if (stack_is_sorted(a_stack))
		return ;
}
