/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_or_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:29:41 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 09:38:47 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_or_reverse_rotate(t_stack **a_stack)
{
	int	min_index;

	min_index = 0;
	find_min_index(a_stack, &min_index);
	if (min_index < ft_stacksize(*a_stack) / 2)
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
}
