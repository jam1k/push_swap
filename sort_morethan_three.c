/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_morethan_three.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:13:38 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 15:20:27 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_steps(long int cost_a, long int cost_b)
{
	long int	steps;

	steps = 0;
	while (cost_a != 0 || cost_b != 0)
	{
		if (cost_a > 0 && cost_b > 0)
		{
			steps++;
			cost_a--;
			cost_b--;
		}
		else if (cost_a < 0 && cost_b < 0)
		{
			steps++;
			cost_a++;
			cost_b++;
		}
		else
		{
			steps += (ft_abs(cost_a) + ft_abs(cost_b));
			cost_a = 0;
			cost_b = 0;
		}
	}
	return (steps);
}

static void	get_and_do_best_move(t_list **a_stack, t_list **b_stack)
{
	t_list		*node;
	long int	best_cost_a;
	long int	best_cost_b;
	long int	steps;

	node = *b_stack;
	steps = LONG_MAX;
	while (node)
	{
		if (get_steps(node->content->cost_a, node->content->cost_b) < steps)
		{
			best_cost_a = node->content->cost_a;
			best_cost_b = node->content->cost_b;
			steps = get_steps(node->content->cost_a, node->content->cost_b);
		}
		node = node->next;
	}
	chose_rr_or_r(a_stack, b_stack, best_cost_a, best_cost_b);
}

static void	get_cost_stack(t_list *a_stack, t_list *b_stack)
{
	size_t	pos_max_a;
	size_t	pos_max_b;

	pos_max_a = ft_lstsize(a_stack);
	pos_max_b = ft_lstsize(b_stack);
	while (b_stack)
	{
		if (pos_max_b - b_stack->content->pos < b_stack->content->pos)
		{
			b_stack->content->cost_b = pos_max_b - b_stack->content->pos;
			b_stack->content->cost_b = -b_stack->content->cost_b;
		}
		else
			b_stack->content->cost_b = b_stack->content->pos;
		if (pos_max_a - b_stack->content->target_pos < \
			b_stack->content->target_pos)
		{
			b_stack->content->cost_a = pos_max_a - b_stack->content->target_pos;
			b_stack->content->cost_a = -b_stack->content->cost_a;
		}
		else
			b_stack->content->cost_a = b_stack->content->target_pos;
		b_stack = b_stack->next;
	}
}

static void	sort_a_stack(t_list **a_stack)
{
	long int		pos_lower_index;
	t_list			*node;
	long int		size;

	get_position_stack(*a_stack, NULL);
	node = *a_stack;
	pos_lower_index = 0;
	while (node)
	{
		if (node->content->index == 1)
		{
			pos_lower_index = node->content->pos;
			break ;
		}
		node = node->next;
	}
	size = (long int)ft_lstsize(*a_stack);
	if (size - pos_lower_index < pos_lower_index)
	{
		pos_lower_index = size - pos_lower_index;
		pos_lower_index = -pos_lower_index;
	}
	chose_rr_or_r(a_stack, NULL, pos_lower_index, 0);
}

void	sort_morethan_three(t_list **a_stack, t_list **b_stack)
{
	create_stack_b(a_stack, b_stack);
	sort_upto_three(a_stack);
	while (!stack_is_sorted(*a_stack, *b_stack))
	{
		get_position_stack(*a_stack, *b_stack);
		get_target_position_stack(*a_stack, *b_stack);
		get_cost_stack(*a_stack, *b_stack);
		get_and_do_best_move(a_stack, b_stack);
		push_a(a_stack, b_stack, 0);
		if (*b_stack == NULL)
			sort_a_stack(a_stack);
	}
}
