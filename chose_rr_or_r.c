/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chose_rr_or_r.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:48:36 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 15:00:39 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	a_lower_and_b_lower(t_list **stack_a, t_list **stack_b, \
	long int *cost_a, long int *cost_b)
{
	reverse_rotate_a_b(stack_a, stack_b, 0);
	(*cost_a)++;
	(*cost_b)++;
}

static void	cost_a_function(t_list **stack_a, long int *cost_a)
{
	if ((*cost_a) < 0)
	{
		reverse_rotate_a(stack_a, 0);
		(*cost_a)++;
	}
	else if ((*cost_a) > 0)
	{
		rotate_a(stack_a, 0);
		(*cost_a)--;
	}
}

void	chose_rr_or_r(t_list **stack_a, t_list **stack_b, \
	long int cost_a, long int cost_b)
{
	while (cost_a != 0 || cost_b != 0)
	{
		if (cost_a < 0 && cost_b < 0)
			a_lower_and_b_lower(stack_a, stack_b, &cost_a, &cost_b);
		else if (cost_a > 0 && cost_b > 0)
		{
			rotate_a_b(stack_a, stack_b, 0);
			cost_a--;
			cost_b--;
		}
		else if (cost_a != 0)
			cost_a_function(stack_a, &cost_a);
		else if (cost_b < 0)
		{
			reverse_rotate_b(stack_b, 0);
			cost_b++;
		}
		else if (cost_b > 0)
		{
			rotate_b(stack_b, 0);
			cost_b--;
		}
	}
}
