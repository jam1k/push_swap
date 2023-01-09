/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:42:21 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/09 15:57:20 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a_stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*temp;

	if (!*a_stack)
		return ;
	first = *a_stack;
	second = (*a_stack)->next;
	if (second)
	{
		(*a_stack) = second;
		temp = first;
		first->next = second->next;
		second->next = temp;
	}
}

void	swap_b(t_stack **b_stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*temp;

	if (!*b_stack)
		return ;
	first = *b_stack;
	second = (*b_stack)->next;
	if (second)
	{
		(*b_stack) = second;
		temp = first;
		first->next = second->next;
		second->next = temp;
	}
}

void	swap_a_b(t_stack **a_stack, t_stack **b_stack)
{
	swap_a(a_stack);
	swap_b(b_stack);
}

void	push_a(t_stack *a_stack, t_stack *b_stack)
{
	t_stack *elem;
	t_stack	*tmp;

	elem = b_stack;
	tmp = a_stack;
	a_stack = elem;
	elem->next = tmp;
	b_stack = b_stack->next;
	print_list(a_stack);
	print_list(b_stack);
}

void	push_b(t_stack *a_stack, t_stack *b_stack)
{
	t_stack *elem;
	t_stack	*tmp;

	elem = a_stack;
	tmp = b_stack;
	b_stack = elem;
	b_stack->next = tmp;
	a_stack = a_stack->next;
	free(elem);
	print_list(b_stack);
}
