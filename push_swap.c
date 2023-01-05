/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 16:18:32 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	error_handling(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!ft_atoi(argv[i]) || ft_atoi(argv[i]) < 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

static t_stack	*read_the_input(int argc, char **argv)
{
	t_stack	*new_node;
	t_stack	*a_stack;
	int		i;


	a_stack = ft_stacknew(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		new_node = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&a_stack, new_node);

		i++;
	}

	while (a_stack)
		{
			ft_printf("a_stack = %d\n", a_stack->content);
			a_stack = a_stack->next;
		}
	return (a_stack);
}

int	main(int argc, char **argv)
{
	if (!error_handling(argc, argv))
		return (1);
	read_the_input(argc, argv);
	return (0);
}
