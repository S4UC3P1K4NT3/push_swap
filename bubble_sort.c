/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   bubble_sort.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/20 00:34:18 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/20 01:11:29 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_stack **a)
{
	size_t	i;
	size_t	j;
	size_t  len;
	len = ft_stacklen(*a);
	i = 0;
	while (i < len -1)
	{
		
		j = 0;
		while ( j++ < len -1)
		{
			if ((*a)->content > (*a)->next->content)
				sa(a);
			ft_printf("test : %d\n",(*a)->content);
			*a = (*a)->next;
			ra(a);
			
		}
		*a = ft_stackfirst(*a);
		i++;
	}
}
