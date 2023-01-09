/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:51:53 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/09 15:49:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *node)
{
	if (!node)
		return ;
	ft_printf("Beginning of Stack\n");
	while (node)
	{
		ft_printf("stack = %d\n", node->content);
		node = node->next;
	}
	ft_printf("End of Stack\n");
}
