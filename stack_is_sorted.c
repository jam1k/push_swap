/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:14:55 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 12:42:48 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_list *a_stack, t_list *b_stack)
{
	int		max_value;

	if (b_stack != NULL)
		return (0);
	if (ft_lstsize(a_stack) == 1)
		return (1);
	max_value = a_stack->content->value;
	a_stack = a_stack->next;
	while (a_stack)
	{
		if (max_value < a_stack->content->value)
			max_value = a_stack->content->value;
		else
			return (0);
		a_stack = a_stack->next;
	}
	return (1);
}
