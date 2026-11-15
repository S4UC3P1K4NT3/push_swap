/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   stack_utils.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/15 14:15:08 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/15 15:15:27 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
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

t_stack	*new_stack(void *content)
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
