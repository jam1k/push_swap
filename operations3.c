/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:50:59 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 10:02:17 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a_stack)
{
	t_stack	*current;
	t_stack	*prev;

	if (!*a_stack)
		return ;
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
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **b_stack)
{
	t_stack	*current;
	t_stack	*prev;

	if (!*b_stack)
		return ;
	current = *b_stack;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *b_stack;
	prev->next = NULL;
	*b_stack = current;
	ft_printf("rrb\n");
}

void	reverse_rotate_a_b(t_stack **a_stack, t_stack **b_stack, t_stack *prev)
{
	t_stack	*current;

	if (!*a_stack || !*b_stack)
		return ;
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
	current = *b_stack;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *b_stack;
	prev->next = NULL;
	*b_stack = current;
	ft_printf("rrr\n");
}
