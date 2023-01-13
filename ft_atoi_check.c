/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:31:24 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 14:59:40 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi_zero(const char *str)
{
	int			i;
	int			sign;
	long		result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
			i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		if (result > 2147483647 && sign == 1)
			return (0);
		if (result > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	result = result * sign;
	return ((int)result);
}
