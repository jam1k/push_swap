/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:52:34 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/25 13:34:19 by jshestov         ###   ########.fr       */
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

char	**create_argv(int word_num, char **argv)
{
	char	**res;
	char	**temp;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * word_num);
	if (!res)
		return (0);
	res[0] = strdup(argv[0]);
	i = 1;
	j = 0;
	temp = ft_split(argv[1], ' ');
	while (i < word_num)
	{
		res[i] = strdup(temp[j]);
		i++;
		j++;
	}
	return (res);
}

int	error_handling(int argc, char **argv)
{
	int		digit_or_not;
	int		words_num;
	char	**arr;

	digit_or_not = 0;
	if (argc == 2)
	{
		words_num = 1 + count_words(argv[1], ' ');
		arr = create_argv(words_num, argv);
		digit_or_not = is_digit(words_num, arr);
	}
	else
		digit_or_not = is_digit(argc, argv);
	if (digit_or_not == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
