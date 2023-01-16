/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:08:10 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/16 14:43:56 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_helper(t_stack **a_stack, int *min_index, int *max_index)
{
	if (*min_index == 0 && *max_index == 1)
	{
		swap_a(a_stack);
		rotate_a(a_stack);
	}
	else if (*min_index == 1 && *max_index == 0)
		rotate_a(a_stack);
	else if (*min_index == 1 && *max_index == 2)
		swap_a(a_stack);
	else if (*min_index == 2 && *max_index == 0)
	{
		swap_a(a_stack);
		reverse_rotate_a(a_stack);
	}
	else if (*min_index == 2 && *max_index == 1)
		reverse_rotate_a(a_stack);
}

void	ft_sort_three_numbers(t_stack **a_stack)
{
	int		min_index;
	int		max_index;

	min_index = 0;
	max_index = 0;
	find_min_index(a_stack, &min_index);
	find_max_index(a_stack, &max_index);
	ft_sort_helper(a_stack, &min_index, &max_index);
}
