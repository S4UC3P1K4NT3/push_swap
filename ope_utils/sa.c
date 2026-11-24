/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sa.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/17 09:47:57 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/24 15:52:20 by gtomasin        ###   ########.fr        */
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
}
