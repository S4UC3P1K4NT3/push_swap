/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   stack_utils.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/15 14:15:08 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/15 15:23:22 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_back(t_stack **lst, int content)
{
	t_stack	*new;

	new = new_stack(content);
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_stacklast(*lst)->next = new;
	new->prev = ft_stacklast(*lst);
}

t_stack	*new_stack(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->content = content;
	new->next = NULL;
	return ((new));
}

t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_stackfirst(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}
