/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:50:59 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/20 11:11:00 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a_stack)
{
	t_stack	*current;
	t_stack	*prev;
	t_stack	*tmp;
	int		i;

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
	tmp = *a_stack;
	i = 0;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **b_stack)
{
	t_stack	*current;
	t_stack	*prev;
	t_stack	*tmp;
	int		i;

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
	tmp = *b_stack;
	i = 0;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
	ft_printf("rrb\n");
}

static void	rrr_helper(t_stack **a_stack)
{
	t_stack	*prev;
	t_stack	*current;
	t_stack	*next;

	current = *a_stack;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*a_stack = prev;
}

void	reverse_rotate_a_b(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*current;
	int		i;

	rrr_helper(a_stack);
	rrr_helper(b_stack);
	i = 0;
	current = *a_stack;
	while (current)
	{
		current->index = i++;
		current = current->next;
	}
	current = *b_stack;
	i = 0;
	while (current)
	{
		current->index = i++;
		current = current->next;
	}
	ft_printf("rrr\n");
}
