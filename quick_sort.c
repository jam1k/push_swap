/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:35:25 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 14:27:30 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*partition(t_stack *first, t_stack *last)
{
	t_stack	*pivot;
	t_stack	*front;
	int		temp;

// Get first node of given linked list
	pivot = first;
	front = first;
	temp = 0;
	while (front != NULL && front != last)
	{
		if (front->content < last->content)
		{
			pivot = first;
			// Swapping  node values
			temp = first->content;
			first->content = front->content;
			front->content = temp;
			// Visiting the next node
			first = first->next;
		}
		// Visiting the next node
		front = front->next;
	}
	// Change last node value to current node
	temp = first->content;
	first->content = last->content;
	last->content = temp;
	return (pivot);
}

// Performing quick sort in  the given linked list
void	quick_sort(t_stack *first, t_stack *last)
{
	t_stack	*pivot;

	if (first == last)
		return ;
	pivot = partition(first, last);
	if (pivot != NULL && pivot->next != NULL)
	{
		quick_sort(pivot->next, last);
	}
	if (pivot != NULL && first != pivot)
	{
		quick_sort(first, pivot);
	}
}
