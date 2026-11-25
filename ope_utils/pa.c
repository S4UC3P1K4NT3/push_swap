/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:35 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/25 12:17:07 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **lsta, t_stack **lstb)
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
