/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   bubble_sort.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/20 00:34:18 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/20 01:09:03 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_stack **a)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (compute_disorder(ft_stackfirst(*a)) > 0 && i < ft_stacklen(*a))
	{
		j = 0;
		while (compute_disorder(ft_stackfirst(*a)) > 0 && j++ < ft_stacklen(*a))
		{
			if ((*a)->content > (*a)->next->content)
				sa(a);
			ra(a);
			*a = (*a)->next;
		}
		i++;
	}
}
