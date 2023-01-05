/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:29 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 13:43:24 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_list_int
{
	int				content;
	struct s_list	*next;
}	t_list_int;


void	print_list(t_list *node, void (*fptr)(void *));
void	print_int(void *n);

#endif