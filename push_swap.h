/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:29 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/05 16:07:47 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

void	print_list(t_stack *node);
void	print_int(int *n);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_stacknew(int content);
int		ft_stacksize(t_stack *lst);
t_stack	*ft_stacklast(t_stack *lst);

#endif
