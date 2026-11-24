/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   rra.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/17 09:47:51 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/24 12:45:06 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!lst || ft_stacklen(*lst) < 2)
		return ;
	last = ft_stacklast(*lst);
	tmp = *lst;
	tmp->next->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	last->next = tmp;
}
