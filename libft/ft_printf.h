/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:31:30 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/24 10:54:33 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int	ft_printf(const char *placeholders, ...);
int	ft_print_c(char c);
int	ft_print_s(char	*s);
int	ft_print_p(void *p);
int	ft_print_d(int num);
int	ft_print_i(int num);
int	ft_print_u(unsigned int unum);
int	ft_print_x(int num);
int	ft_print_upper_x(int nb);
int	ft_print_percentage(void);
int	ft_print_nbr(int nb);

#endif
