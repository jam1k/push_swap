/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:48:15 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/09 12:16:30 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *a_stack)
{
	print_list(a_stack);
}

void	rotate_b(t_stack *b_stack)
{
	print_list(b_stack);
}

void	rotate_a_b(t_stack *a_stack, t_stack *b_stack)
{
	rotate_a(a_stack);
	rotate_b(b_stack);
}
