/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:05:44 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/04 15:46:33 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_handling(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return ;
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

int	*read_the_input(int argc, char **argv)
{
	t_list	*new_node;
	t_list	*a_stack;
	int		i;
	int		content;

	content = ft_atoi(argv[1]);
	new_node = ft_lstnew(&content);
	a_stack = &new_node;
	if (argc > 2)
	{
		i = 2;
		while (i < argc)
		{
			free_node(new_node)
			i++;
		}
	}


	return (a_stack);
}

void	save_to_stack(void)
{
}

int	main(int argc, char **argv)
{
	t_list	*a_stack;
	if (!error_handling(argc, argv))
		return (1);
	a_stack = read_the_input(argc, argv);
	return (0);
}
