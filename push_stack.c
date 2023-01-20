/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:03:42 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/20 14:04:01 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*elem;
	t_stack	*tmp;

	if (!*b_stack)
		return ;
	elem = *b_stack;
	*b_stack = (*b_stack)->next;
	elem->next = NULL;
	ft_stackadd_front(a_stack, elem);
	tmp = *b_stack;
	while (tmp)
	{
		tmp->index--;
		tmp = tmp->next;
	}
	ft_printf("pa\n");
}

void	push_b(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*elem;
	t_stack	*tmp;

	if (!*a_stack)
		return ;
	elem = *a_stack;
	*a_stack = (*a_stack)->next;
	elem->next = NULL;
	ft_stackadd_front(b_stack, elem);
	tmp = *a_stack;
	while (tmp)
	{
		tmp->index--;
		tmp = tmp->next;
	}
	ft_printf("pb\n");
}
