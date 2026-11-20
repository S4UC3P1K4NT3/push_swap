/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 00:34:18 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/20 16:26:05 by gtomasin         ###   ########.fr       */
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
		*a = ft_stacklast(*a);
		while (compute_disorder(ft_stackfirst(*a)) > 0 && j++ < ft_stacklen(*a) - 1)
		{
			if ((*a)->content < (*a)->prev->content)
			{
				sa(a);
			}
			ra(a);
			*a = ft_stacklast(*a);
		}
		ra(a);
		i++;
	}
}
