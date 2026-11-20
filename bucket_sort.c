/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   bucket_sort.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/19 11:48:03 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/20 01:05:12 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

static void	dis(t_stack **a, t_stack **b, long min, long max, size_t nb)
{
	size_t	j;
	size_t	i;
	long	minv;
	long	maxv;

	i = 0;
	while (i < nb)
	{
		minv = min + i * ((max - min + nb - 1) / nb);
		maxv = minv + (max - min + nb - 1) / nb - 1;
		if (i + 1 == nb)
			maxv = max;
		j = 0;
		while (j++ < ft_stacklen(*a))
		{
			if (ft_stacklast(*a)->content >= minv &&
					ft_stacklast(*a)->content <= maxv)
			pa(b, a);
			else
				ra(a);
		}
		i++;
	}
}

void	bucket_sort(t_stack **a, t_stack **b)
{
	size_t	len;
	size_t	nb;
	long	min;
	long	max;
	t_stack	*tmp;

	if (!a || !b || ft_stacklen(*a) < 2)
		return ;
	len = ft_stacklen(*a);
	nb = 1;
	while (nb * nb < len)
		nb++;
	tmp = ft_stackfirst(*a);
	min = tmp->content;
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	dis(a, b, min, max, nb);
}
