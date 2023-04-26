/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:30 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 14:36:05 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	target_pos_was_too_long(t_list *a_stack, t_list *b_stack)
{
	unsigned int	difference;

	difference = a_stack->content->index - b_stack->content->index;
	b_stack->content->target_pos = a_stack->content->pos;
	return (difference);
}

static void	target_pos_if_higher_index(t_list *a_stack, t_list *b_stack, \
	unsigned int min_index)
{
	while (a_stack)
	{
		if (a_stack->content->index < min_index)
		{
			min_index = a_stack->content->index;
			b_stack->content->target_pos = a_stack->content->pos;
		}
		a_stack = a_stack->next;
	}
}

void	get_target_position_stack(t_list *a_stack, t_list *b_stack)
{
	t_list			*first_a;
	unsigned int	difference;
	unsigned int	max_index;

	first_a = a_stack;
	max_index = 0;
	while (b_stack)
	{
		a_stack = first_a;
		difference = UINT_MAX;
		while (a_stack)
		{
			if (a_stack->content->index > max_index)
				max_index = a_stack->content->index;
			if (difference > a_stack->content->index - b_stack->content->index \
				&& a_stack->content->index > b_stack->content->index)
				difference = target_pos_was_too_long(a_stack, b_stack);
			a_stack = a_stack->next;
		}
		if (b_stack->content->index > max_index)
			target_pos_if_higher_index(first_a, b_stack, max_index);
		b_stack = b_stack->next;
	}
}

void	get_position_stack(t_list *a_stack, t_list *b_stack)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = (unsigned int)ft_lstsize(a_stack);
	while (i < size)
	{
		a_stack->content->pos = i;
		a_stack = a_stack->next;
		i++;
	}
	if (b_stack)
		get_position_stack(b_stack, NULL);
}
