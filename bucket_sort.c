/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:48:03 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/25 12:16:39 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	minp(t_stack *b)
{
	t_stack	*tmp;
	size_t	pos;
	size_t	minp;
	int		min;

	tmp = ft_stacklast(b);
	min = tmp->content;
	minp = 0;
	pos = 0;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			minp = pos;
		}
		tmp = tmp->prev;
		pos++;
	}
	return (minp);
}

static void	smol_sort(t_stack **a, t_stack **b)
{
	size_t	len;
	size_t	pos;
	size_t	i;
	size_t	j;

	len = ft_stacklen(*b);
	i = 0;
	while (i < len)
	{
		pos = minp(*b);
		j = 0;
		while (j < pos)
		{
			rb(b);
			j++;
		}
		pa(a, b);
		i++;
	}
}

static void	move_bucket(t_stack **a, t_stack **b, long minv, long maxv)
{
	size_t	j;
	size_t	len;

	len = ft_stacklen(*a);
	j = 0;
	while (j++ < len)
	{
		if (ft_stacklast(*a)->content >= minv
				&& ft_stacklast(*a)->content <= maxv)
		pb(b, a);
		else
			ra(a);
	}
}

static void	dis(t_stack **a, t_stack **b, long min, long max)
{
	long	i;
	long	minv;
	long	maxv;
	long	nb;

	nb = 1;
	while (nb * nb < (long) ft_stacklen(*a))
		nb++;
	i = 0;
	while (i < nb)
	{
		minv = min + i * ((max - min + nb - 1) / nb);
		maxv = minv + (max - min + nb - 1) / nb - 1;
		if (i + 1 == nb)
			maxv = max;
		move_bucket(a, b, minv, maxv);
		i++;
	}
	smol_sort(a, b);
}

void	bucket_sort(t_stack **a, t_stack **b)
{
	long	min;
	long	max;
	t_stack	*tmp;

	if (!a || !b || ft_stacklen(*a) < 2)
		return ;
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
	dis(a, b, min, max);
}
