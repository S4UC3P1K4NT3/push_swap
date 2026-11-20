/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:00:31 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/20 14:03:46 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack **lstb, t_stack **lsta)
{
	t_stack	*tmp;

	if (!lsta || !lstb || !*lstb)
		return ;
	tmp = ft_stacklast(*lstb);
	*lstb = tmp->prev;
	if (*lstb)
		(*lstb)->next = NULL;
	tmp->prev = ft_stacklast(*lsta);
	if (tmp->prev)
		tmp->prev->next = tmp;
	else
		*lsta = tmp;
	tmp->next = NULL;
}
