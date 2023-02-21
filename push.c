/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:55:56 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 11:06:19 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*node;

	if (*stack_from == NULL)
		return ;
	node = *stack_from;
	*stack_from = (*stack_from)->next;
	node->next = NULL;
	ft_lstadd_front(stack_to, node);
}

void	push_a(t_list **a_stack, t_list **b_stack, int silent)
{
	push(b_stack, a_stack);
	if (silent == 0)
		ft_printf("pa\n");
}

void	push_b(t_list **a_stack, t_list **b_stack, int silent)
{
	push(a_stack, b_stack);
	if (silent == 0)
		ft_printf("pb\n");
}
