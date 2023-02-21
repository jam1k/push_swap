/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:24:51 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 11:58:55 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	nbr_occurence_bigger(t_list *stack, int value)
{
	unsigned int	nbr;

	nbr = 0;
	while (stack)
	{
		if (stack->content->value > value)
			nbr++;
		stack = stack->next;
	}
	return (nbr);
}

void	get_index(t_list *stack_a)
{
	size_t			size;
	unsigned int	occurence;
	t_list			*first;

	first = stack_a;
	size = ft_lstsize(stack_a);
	while (stack_a)
	{
		occurence = nbr_occurence_bigger(first, stack_a->content->value);
		stack_a->content->index = size - occurence;
		stack_a = stack_a->next;
	}
}
