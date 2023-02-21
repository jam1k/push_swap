/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:45:55 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 11:29:30 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack_b(t_list **a_stack, t_list **b_stack)
{
	size_t	size;
	size_t	i;
	size_t	j;

	*b_stack = NULL;
	size = ft_lstsize(*a_stack);
	j = size;
	while (j && size > 5)
	{
		if ((*a_stack)->content->index > size / 2)
			push_b(a_stack, b_stack, 0);
		else
			rotate_a(a_stack, 0);
		j--;
	}
	i = 0;
	size = ft_lstsize(*a_stack);
	if (size <= 3)
		return ;
	while (i < (size - 3))
	{
		push_b(a_stack, b_stack, 0);
		i++;
	}
}

int	*convert_array_to_int(char **array)
{
	int				*array_int;
	unsigned int	i;
	unsigned int	size;

	size = 0;
	while (array[size])
		size++;
	array_int = (int *) malloc(sizeof(*array_int) * size);
	if (array_int == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array_int[i] = ft_atoi(array[i]);
		i++;
	}
	return (array_int);
}

char	**get_array_single_arg(char *av)
{
	char	**array;

	array = ft_split(av, ' ');
	return (array);
}

char	**get_array_multiple_args(int ac, char **av)
{
	char			**array;
	unsigned int	i;

	array = (char **) malloc(sizeof(*array) * ((ac - 1) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ((unsigned int)ac - 1))
	{
		array[i] = ft_strdup(av[i + 1]);
		if (array[i] == NULL)
		{
			free_double_ptr_char(array);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**get_array(int ac, char **av)
{
	char	**array;

	if (ac == 2)
		array = get_array_single_arg(av[1]);
	else
		array = get_array_multiple_args(ac, av);
	if (array == NULL || *array == NULL)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		exit (EXIT_FAILURE);
	}
	return (array);
}
