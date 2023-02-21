/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:38:23 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 15:18:08 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*node;

	if (*stack == NULL || stack == NULL)
		return ;
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	ft_lstadd_back(stack, node);
}

void	rotate_a(t_list **a_stack, int silent)
{
	rotate(a_stack);
	if (silent == 0)
		ft_printf("ra\n");
}

void	rotate_b(t_list **b_stack, int silent)
{
	rotate(b_stack);
	if (silent == 0)
		ft_printf("rb\n");
}

void	rotate_a_b(t_list **a_stack, t_list **b_stack, int silent)
{
	rotate(a_stack);
	rotate(b_stack);
	if (silent == 0)
		ft_printf("rr\n");
}
