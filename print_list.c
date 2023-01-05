/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:51:53 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 16:05:17 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *node)
{
	if (!node)
		return ;
	while (node->next)
	{
		ft_printf("%d\n", node->content);
		node = node->next;
	}
}
