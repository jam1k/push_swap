/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:32:19 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 13:55:29 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_hundred_numbers(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*current;
	int		chunks;
	int		i;

	if (!*a_stack)
		return ;
	chunks = determine_chunks(ft_stacksize(*a_stack));
	current = *a_stack;
	i == 1;
	while (i <= chunks)
	{
		while (current)
		{
			if (current->content < i * 20)
				break ;
		}
		chunks--;
	}
}
