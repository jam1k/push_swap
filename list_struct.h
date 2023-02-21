/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:08:51 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/07 11:33:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_STRUCT_H
# define LIST_STRUCT_H

# define T_LIST

typedef struct s_stack
{
	int				value;
	unsigned int	index;
	unsigned int	pos;
	unsigned int	target_pos;
	long int		cost_a;
	long int		cost_b;
}					t_stack;

typedef struct s_list
{
	t_stack			*content;
	struct s_list	*next;
}					t_list;

#endif
