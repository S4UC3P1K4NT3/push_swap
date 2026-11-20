/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:45 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/20 17:21:08 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*down;

	if (!lst || ft_stacklen(*lst) < 2)
		return ;
	tmp = ft_stackfirst(*lst);
	down = ft_stacklast(*lst);
	down->prev->next = NULL;
	down->prev = NULL;
	down->next = tmp;
	tmp->prev = down;
	*lst = down;
}
