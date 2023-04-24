/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:44:20 by jshestov          #+#    #+#             */
/*   Updated: 2023/04/24 10:40:26 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int value)
{
	t_stack	*node;
	t_list	*list;

	list = malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		free(list);
		return (NULL);
	}
	node->value = value;
	node->cost_a = -1;
	node->cost_b = -1;
	node->index = 0;
	node->pos = 0;
	node->target_pos = 0;
	list->content = node;
	list->next = NULL;
	return (list);
}

t_list	*create_linked_list(int ac, char **av)
{
	unsigned int	i;
	t_list			*node;
	t_list			*stack_a;
	int				*array;
	unsigned int	size;

	size = 0;
	array = check_args(ac, av, &size);
	i = 0;
	stack_a = NULL;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		node = create_node(array[i++]);
		if (node == NULL)
		{
			ft_lstclear(&stack_a, free);
			free(array);
			exit(EXIT_FAILURE);
		}
		ft_lstadd_back(&stack_a, node);
	}
	get_index(stack_a);
	free(array);
	return (stack_a);
}
