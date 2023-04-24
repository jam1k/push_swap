/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:06:31 by jshestov          #+#    #+#             */
/*   Updated: 2023/04/24 11:42:09 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list			*a_stack;
	t_list			*b_stack;

	if (ac < 2)
		return (0);
	if (av[1][0] == '\0')
		return (0);
	a_stack = create_linked_list(ac, av);
	b_stack = NULL;
	if (stack_is_sorted(a_stack, b_stack))
	{
		ft_lstclear(&a_stack, free);
		return (0);
	}
	else if (ft_lstsize(a_stack) <= 3)
	{
		sort_upto_three(&a_stack);
	}
	else
		sort_morethan_three(&a_stack, &b_stack);
	ft_lstclear(&a_stack, free);
	ft_lstclear(&b_stack, free);
	return (0);
}
