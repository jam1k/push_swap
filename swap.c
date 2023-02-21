/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:53:57 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 15:50:38 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*temp;

	if (!stack)
		return ;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = (*stack)->next;
	if (second)
	{
		(*stack) = second;
		temp = first;
		first->next = second->next;
		second->next = temp;
	}
	return ;
}

void	swap_a(t_list **a_stack, int silent)
{
	swap(a_stack);
	if (silent == 0)
		ft_printf("sa\n");
}

void	swap_b(t_list **b_stack, int silent)
{
	swap(b_stack);
	if (silent == 0)
		ft_printf("sb\n");
}

void	swap_ss(t_list **a_stack, t_list **b_stack, int silent)
{
	swap(a_stack);
	swap(b_stack);
	if (silent == 0)
		ft_printf("ss\n");
}
