/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:50:42 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/21 15:14:10 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_print(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	free_double_ptr_char(char **arr_char)
{
	size_t	i;

	i = 0;
	while (arr_char[i])
	{
		free(arr_char[i]);
		i++;
	}
	free(arr_char);
}
