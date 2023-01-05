/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 13:43:09 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_handling(int argc, char **argv)
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

void free_node (t_list *node)
{
	free(node);
}

t_list	**read_the_input(int argc, char **argv)
{
	t_list	*new_node;
	t_list	**a_stack;
	int		i;
	int		content;
	int		*p;

	a_stack = NULL;

	i = 1;
	while (i < argc)
	{
		content = ft_atoi(argv[i]);
		ft_printf("content = %d\n", content);
		new_node = ft_lstnew(&content);
		p = (new_node->content);
		ft_printf("content of new node %d\n", *p);
		ft_lstadd_back(a_stack, new_node);
		ft_printf("a_stack = ");
		print_list(*a_stack, print_int);
		free(new_node);
		i++;
	}
	return (a_stack);
}

void	save_to_stack(void)
{
}

int	main(int argc, char **argv)
{
	if (!error_handling(argc, argv))
		return (1);
	read_the_input(argc, argv);
	return (0);
}
