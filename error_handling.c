/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:52:34 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/20 14:52:51 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_digit(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (j == len)
			return (0);
		while (j < len)
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		if ((ft_atoi_zero(argv[i]) == 0 && len > 1))
			return (0);
		i++;
	}
	return (1);
}

int	error_handling(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!is_digit(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
