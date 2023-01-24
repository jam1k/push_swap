/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node_at_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:14:37 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 13:47:11 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_node_at_index(t_stack *head, int i)
{
	t_stack	*current;
	int		count;

	current = head;
	count = 0;
	while (current)
	{
		if (count == i)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
