/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:00:31 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/20 17:12:02 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack **lstb, t_stack **lsta)
{
	t_stack	*tmp;

	if (!lstb || !lsta || !*lsta)
		return ;
	tmp = ft_stacklast(*lsta);
	*lsta = tmp->prev;
	if (*lsta)
		(*lsta)->next = NULL;
	tmp->prev = ft_stacklast(*lstb);
	if (tmp->prev)
		tmp->prev->next = tmp;
	else
		*lstb = tmp;
	tmp->next = NULL;
}
