/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:29 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/24 09:31:50 by jshestov         ###   ########.fr       */
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
	int				index;
	struct s_stack	*next;
}	t_stack;

long	ft_atoi_zero(const char *str);
void	print_list(t_stack *node);
void	print_int(int *n);
int		error_handling(int argc, char **argv);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
void	ft_stackadd_front(t_stack **stack_head, t_stack *new);
t_stack	*ft_stacknew(int content);
int		ft_stacksize(t_stack *lst);
t_stack	*ft_stacklast(t_stack *lst);
void	swap_a(t_stack **a_stack);
void	swap_b(t_stack **b_stack);
void	swap_a_b(t_stack **a_stack, t_stack **b_stack);
void	push_a(t_stack **a_stack, t_stack **b_stack);
void	push_b(t_stack **a_stack, t_stack **b_stack);
void	rotate_a(t_stack **a_stack);
void	rotate_b(t_stack **b_stack);
void	rotate_a_b(t_stack **a_stack, t_stack **b_stack);
void	reverse_rotate_a(t_stack **a_stack);
void	reverse_rotate_b(t_stack **b_stack);
void	reverse_rotate_a_b(t_stack **a_stack, t_stack **b_stack);
void	delete_head(t_stack **head);
void	ft_sort_two_numbers(t_stack **a_stack);
void	ft_sort_three_numbers(t_stack **a_stack);
void	ft_sort_five_numbers(t_stack **a_stack, t_stack **b_stack);
void	ft_sort_more_numbers(t_stack **a_stack, t_stack **b_stack);
int		stack_is_sorted(t_stack **a_stack);
void	ft_sort_four_numbers(t_stack **a_stack, t_stack **b_stack);
void	find_min_index(t_stack **a_stack, int *min_index);
void	find_max_index(t_stack **a_stack, int *max_index);
void	rotate_or_reverse_rotate(t_stack **a_stack);

#endif
