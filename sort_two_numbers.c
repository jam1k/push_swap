/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:59:35 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/16 09:59:36 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two_numbers(t_stack **a_stack)
{
	t_stack	*last;
	t_stack	*current;

	if (!*a_stack)
		return ;
	current = *a_stack;
	last = ft_stacklast(*a_stack);
	if (current->content < last->content)
		return ;
	else
		swap_a(a_stack);
}
