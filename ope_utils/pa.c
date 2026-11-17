/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:35 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/17 15:54:44 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **lsta, t_stack **lstb)
{
	t_stack	*b_top;
	t_stack	*a_last;

	if (!lstb || !*lstb)
		return ;
	b_top = ft_stacklast(*lstb);
	if (b_top->prev)
		b_top->prev->next = NULL;
	else
		*lstb = NULL;
	if (!lsta || !*lsta)
	{
		*lsta = b_top;
		b_top->prev = NULL;
	}
	else
	{
		a_last = ft_stacklast(*lsta);
		a_last->next = b_top;
		b_top->prev = a_last;
	}
	b_top->next = NULL;
	ft_printf("pa\n");
}
