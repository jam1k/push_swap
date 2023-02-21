/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_upto_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:44:37 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 15:46:37 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*sort_two(t_list **a_stack)
{
	if (stack_is_sorted(*a_stack, NULL))
		return (*a_stack);
	swap_a(a_stack, 0);
	print_list(*a_stack);
	return (*a_stack);
}

static t_list	*sort_three(t_list **stack_a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	while (stack_is_sorted(*stack_a, NULL) == 0)
	{
		first = (*stack_a)->content;
		second = (*stack_a)->next->content;
		third = (*stack_a)->next->next->content;
		if (first->index > second->index && first->index > third->index)
			rotate_a(stack_a, 0);
		else if (second->index > first->index && second->index > third->index)
			reverse_rotate_a(stack_a, 0);
		else if (first->index > second->index)
			swap_a(stack_a, 0);
		else
			exit_print();
	}
	return (*stack_a);
}

t_list	*sort_upto_three(t_list **a_stack)
{
	size_t	size;

	size = ft_lstsize(*a_stack);
	if (size == 1)
		return (*a_stack);
	else if (size == 2)
		return (sort_two(a_stack));
	else if (size == 3)
		return (sort_three(a_stack));
	return (NULL);
}
