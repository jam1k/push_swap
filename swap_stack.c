/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:03:32 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/20 14:03:35 by jshestov         ###   ########.fr       */
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
		(*a_stack)->index = 0;
		temp = first;
		temp->index = 1;
		first->next = second->next;
		second->next = temp;
	}
	ft_printf("sa\n");
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
		(*b_stack)->index = 0;
		temp = first;
		temp->index = 1;
		first->next = second->next;
		second->next = temp;
	}
	ft_printf("sb\n");
}

void	swap_a_b(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		temp_index;

	if (!*a_stack || !*b_stack)
		return ;
	temp_a = (*a_stack)->next;
	temp_b = (*b_stack)->next;
	temp_index = (*a_stack)->index;
	(*a_stack)->index = temp_a->index;
	temp_a->index = temp_index;
	temp_index = (*b_stack)->index;
	(*b_stack)->index = temp_b->index;
	temp_b->index = temp_index;
	(*a_stack)->next = temp_a->next;
	temp_a->next = *a_stack;
	*a_stack = temp_a;
	(*b_stack)->next = temp_b->next;
	temp_b->next = *b_stack;
	*b_stack = temp_b;
	ft_printf("ss\n");
}
