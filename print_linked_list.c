/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:40:38 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 11:35:10 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *stack)
{
	if (!stack)
		return ;
	ft_printf("Beginning of Stack\n");
	while (stack)
	{
		ft_printf("stack = %d\n", stack->content->value);
		stack = stack->next;
	}
	ft_printf("End of Stack\n");
}
