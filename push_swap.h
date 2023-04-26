/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:29 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/21 15:14:24 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# include "list_struct.h"
# include "./libft/libft.h"

int			stack_is_sorted(t_list *a_stack, t_list *b_stack);
int			*check_args(int ac, char **av, unsigned int *size);
char		**get_array(int ac, char **av);
int			*convert_array_to_int(char **array);
t_list		*create_linked_list(int ac, char **av);
t_list		*create_node(int value);
void		free_double_ptr_char(char **arr_char);
void		get_index(t_list *stack_a);
void		print_list(t_list *stack);
t_list		*sort_upto_three(t_list **a_stack);
void		swap_a(t_list **a_stack, int silent);
void		swap_b(t_list **b_stack, int silent);
void		swap_ss(t_list **a_stack, t_list **b_stack, int silent);
void		rotate_a(t_list **a_stack, int silent);
void		rotate_b(t_list **b_stack, int silent);
void		rotate_a_b(t_list **a_stack, t_list **b_stack, int silent);
void		push_a(t_list **a_stack, t_list **b_stack, int silent);
void		push_b(t_list **a_stack, t_list **b_stack, int silent);
void		reverse_rotate_a(t_list **a_stack, int silent);
void		reverse_rotate_b(t_list **b_stack, int silent);
void		reverse_rotate_a_b(t_list **a_stack, t_list **b_stack, int silent);
void		exit_print(void);
void		create_stack_b(t_list **a_stack, t_list **b_stack);
void		sort_morethan_three(t_list **a_stack, t_list **b_stack);
void		get_position_stack(t_list *a_stack, t_list *b_stack);
void		get_target_position_stack(t_list *a_stack, t_list *b_stack);
void		chose_rr_or_r(t_list **stack_a, t_list **stack_b, \
			long int cost_a, long int cost_b);

#endif
