/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:08:10 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 13:28:50 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two_numbers(t_stack **a_stack)
{
	t_stack	*last;

	last = ft_stacklast(*a_stack);
	if ((*a_stack)->content < last->content)
		return ;
	else
		swap_a(a_stack);
}

static void	find_minmax_index(t_stack **a_stack, int *min_index, int *max_index)
{
	t_stack	*current;
	int		max;
	int		min;

	current = *a_stack;
	min = current->content;
	max = current->content;
	while (current)
	{
		if (current->content > max)
		{
			max = current->content;
			*max_index = current->index;
		}
		if (current->content < min)
		{
			min = current->content;
			*min_index = current->index;
		}
		current = current->next;
	}
}

static void	ft_sort_helper(t_stack **a_stack, int *min_index, int *max_index)
{
	if (*min_index == 0 && *max_index == 1)
	{
		swap_a(a_stack);
		rotate_a(a_stack);
	}
	else if (*min_index == 1 && *max_index == 0)
		rotate_a(a_stack);
	else if (*min_index == 1 && *max_index == 2)
		swap_a(a_stack);
	else if (*min_index == 2 && *max_index == 0)
	{
		swap_a(a_stack);
		reverse_rotate_a(a_stack);
	}
	else if (*min_index == 2 && *max_index == 1)
		reverse_rotate_a(a_stack);
}

void	ft_sort_three_numbers(t_stack **a_stack)
{
	int		min_index;
	int		max_index;

	min_index = 0;
	max_index = 0;
	find_minmax_index(a_stack, &min_index, &max_index);
	ft_sort_helper(a_stack, &min_index, &max_index);
}
