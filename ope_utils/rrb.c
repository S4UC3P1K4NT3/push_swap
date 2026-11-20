/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:00:50 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/20 14:02:36 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack **lst)
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
