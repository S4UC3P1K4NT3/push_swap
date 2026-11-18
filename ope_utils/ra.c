/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:45 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/18 13:35:49 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || ft_stacklen(*lst) < 2)
		return ;
	tmp = ft_stacklast(*lst);
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
}
