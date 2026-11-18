/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:51 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/18 10:22:00 by jeguiber         ###   ########.fr       */
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
	ft_printf("tmp-%d last-%d\n", tmp->content, last->content);
	tmp->next->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	ft_printf("tmp-%d last-%d\n", tmp->content, last->content);
	last->next = tmp;
	ft_printf("tmp-%d last-%d\n", tmp->content, last->content);
	ft_printf("tmp-%d last-%d\n", tmp->content, last->content);
}
