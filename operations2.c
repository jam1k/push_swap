/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:48:15 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 09:48:18 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a_stack)
{
	t_stack	*elem;

	if (!*a_stack)
		return ;
	elem = ft_stacknew((*a_stack)->content);
	ft_stackadd_back(a_stack, elem);
	*a_stack = (*a_stack)->next;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b_stack)
{
	t_stack	*elem;

	if (!*b_stack)
		return ;
	elem = ft_stacknew((*b_stack)->content);
	ft_stackadd_back(b_stack, elem);
	*b_stack = (*b_stack)->next;
	ft_printf("rb\n");
}

void	rotate_a_b(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*elem;
	t_stack	*elem_b;

	if (!*a_stack)
		return ;
	if (!*b_stack)
		return ;
	elem = ft_stacknew((*a_stack)->content);
	ft_stackadd_back(a_stack, elem);
	*a_stack = (*a_stack)->next;
	elem_b = ft_stacknew((*b_stack)->content);
	ft_stackadd_back(b_stack, elem_b);
	*b_stack = (*b_stack)->next;
	ft_printf("rr\n");
}
