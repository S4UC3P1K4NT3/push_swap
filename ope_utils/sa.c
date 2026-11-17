/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:47:57 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/17 16:08:45 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **lst)
{
	int	tmp;

	if (!lst || !*lst)
		return ;
	if (!ft_stacklast(*lst)->prev)
		return ;
	tmp = ft_stacklast(*lst)->content;
	ft_stacklast(*lst)->content = ft_stacklast(*lst)->prev->content;
	ft_stacklast(*lst)->prev->content = tmp;
	ft_printf("sa\n");
}
