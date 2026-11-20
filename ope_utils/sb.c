/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:00:58 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/20 14:02:51 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack **lst)
{
	int	tmp;

	if (!lst || !*lst)
		return ;
	if (!ft_stacklast(*lst)->prev)
		return ;
	tmp = ft_stacklast(*lst)->content;
	ft_stacklast(*lst)->content = ft_stacklast(*lst)->prev->content;
	ft_stacklast(*lst)->prev->content = tmp;
}
