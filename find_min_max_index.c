/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_max_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:35:54 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/16 15:02:42 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_index(t_stack **a_stack, int *min_index)
{
	t_stack	*current;
	int		min;

	current = *a_stack;
	min = current->content;
	while (current)
	{
		if (current->content < min)
		{
			min = current->content;
			*min_index = current->index;
		}
		current = current->next;
	}
}

void	find_max_index(t_stack **a_stack, int *max_index)
{
	t_stack	*current;
	int		max;

	current = *a_stack;
	max = current->content;
	while (current)
	{
		if (current->content > max)
		{
			max = current->content;
			*max_index = current->index;
		}
		current = current->next;
	}
}
