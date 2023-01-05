/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:51:53 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 13:43:25 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *node, void (*fptr)(void *))
{
	while (node != NULL)
	{
		(*fptr)(node->content);
		node = node->next;
	}
}

void	print_int(void *n)
{
	ft_printf("%d\n", *(int *)n);
}
