/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:45:59 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/13 11:02:02 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_stacklast(*lst);
	last->next = new;
	new->index = last->index + 1;
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*new_node;

	new_node = (t_stack *) malloc(sizeof(t_stack));
	new_node->content = content;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

int	ft_stacksize(t_stack *lst)
{
	t_stack	*current;
	int		count;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_stackadd_front(t_stack **stack_head, t_stack *new)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_head;
	*stack_head = new;
	new->next = tmp;
	tmp = *stack_head;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}
/* void	ft_stackdelone(t_stack *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
} */
/* void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	tmp = *lst;
	*lst = new;
	new->next = tmp;
}

void	ft_lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack	*current;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = current;
	}
} */

/*

void	ft_lstiter(t_stack *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
 */
/*
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*new;
	t_stack	*begin;

	if (!lst || !f || !del)
		return (0);
	begin = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, new);
		lst = lst->next;
	}
	return (begin);
} */
