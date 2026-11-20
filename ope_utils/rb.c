/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:00:46 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/20 14:01:41 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack **lst)
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
