/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 00:34:18 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/20 13:01:59 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_stack **a)
{
	size_t	i;
	size_t	j;
	size_t	len;

	ft_printf("com\n");
	len = ft_stacklen(*a);
	i = 0;
	while (compute_disorder(ft_stackfirst(*a)) > 0 && i < len - 1)
	{
		j = 0;
		ft_printf("compteur :%d\n", j);
		*a = ft_stacklast(*a);
		ft_printf("compteur :%d\n", j);
		while (compute_disorder(ft_stackfirst(*a)) > 0 && j++ < len - 1)
		{
			ft_printf("actuel : %d , previous : %d\n", (*a)->content, (*a)->prev->content);
			if ((*a)->content < (*a)->prev->content)
				sa(a);
			ft_printf("compteur :%d\n", j);
			ra(a);
			ft_printf("compteur :%d\n", j);
			*a = ft_stacklast(*a);
			ft_printf("compteur :%d\n", j);
			*a = (*a)->prev;
			ft_printf("compteur :%d\n", j);
		}
		i++;
	}
}
