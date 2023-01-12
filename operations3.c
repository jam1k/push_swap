/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:50:59 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/12 14:21:21 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a_stack)
{
	t_stack	*current;
	t_stack	*prev;

	current = *a_stack;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *a_stack;
	prev->next = NULL;
	*a_stack = current;
}

void	reverse_rotate_b(t_stack **b_stack)
{
	reverse_rotate_a(b_stack);
}

void	reverse_rotate_a_b(t_stack **a_stack, t_stack **b_stack)
{
	reverse_rotate_a(a_stack);
	reverse_rotate_b(b_stack);
}
