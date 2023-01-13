/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:31:24 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 14:31:33 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi_intmin_intmax(const char *str)
{
	long long int	sum;
	int				sign;
	int				index;

	sum = 0;
	sign = 1;
	index = 0;
	while (str[index] == '\f' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == ' ')
		index++;
	if (str[index] == '-')
		sign *= -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		sum = sum * 10 + str[index] - '0';
		if (sum < 0)
		{
			sum = check_overflow(sign);
			return ((int)sum);
		}
		else if (sum > 2147483647 && sign == 1)
			return (0);
		else if (sum > 2147483648 && sign == -1)
			return (0);
		index++;
	}
	return ((int)sum * sign);
}
