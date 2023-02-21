/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:01:55 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 15:18:22 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*node;

	if (*stack == NULL || stack == NULL)
		return ;
	node = *stack;
	if (node->next == NULL)
		return ;
	while (node->next->next != NULL)
		node = node->next;
	ft_lstadd_front(stack, node->next);
	node->next = NULL;
}

void	reverse_rotate_a(t_list **a_stack, int silent)
{
	if (*a_stack)
		reverse_rotate(a_stack);
	if (silent == 0)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_list **b_stack, int silent)
{
	if (*b_stack)
		reverse_rotate(b_stack);
	if (silent == 0)
		ft_printf("rrb\n");
}

void	reverse_rotate_a_b(t_list **a_stack, t_list **b_stack, int silent)
{
	if (a_stack)
		reverse_rotate(a_stack);
	if (b_stack)
		reverse_rotate(b_stack);
	if (silent == 0)
		ft_printf("rrr\n");
}
