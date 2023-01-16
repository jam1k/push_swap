/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:14:55 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/16 10:22:38 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_stack **a_stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!*a_stack)
		return (0);
	current = *a_stack;
	next = current->next;
	while (next)
	{
		if (next->content < current->content)
		{
			return (0);
		}
		current = current->next;
		next = current->next;
	}
	return (1);
}
