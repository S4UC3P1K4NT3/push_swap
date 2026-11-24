/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   radix_sort.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/22 10:56:43 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/24 13:30:03 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	bnrylen(int mx)
{
	int	i;

	i = 1;
	while (mx /= 2)
		i++;
	return (i);
}

static int	maxnmb(t_stack *a)
{
	int	tmp;

	a = ft_stackfirst(a);
	tmp = a->content;
	a = a->next;
	while (a)
	{
		if (tmp < a->content)
			tmp = a->content;
		a = a->next;
	}
	return (tmp);
}

static char	*itob(int nmb, int max)
{
	char			*res;
	long long int	tmp;
	int				i;

	i = 0;
	res = malloc((bnrylen(max) + 1) * sizeof(char));
	tmp = nmb * 2;
	while (tmp /= 2)
	{
		res[i] = tmp % 2 + '0';
		i++;
	}
	while (i < bnrylen(max))
	{
		res[i] = '0';
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	rstack(t_stack **a, t_stack **b)
{
	size_t	len;

	len = ft_stacklen(*a);
	while (len--)
	{
		pb(b, a);
		rb(b);
	}
	len = ft_stacklen(*b);
	while (len--)
		pa(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	size_t	i;
	int		j;
	size_t	len;

	len = ft_stacklen(*a);
	j = 0;
	while (j < bnrylen(maxnmb(*a)))
	{
		i = len;
		while (i-- > 0)
		{
			*a = ft_stacklast(*a);
			if (itob((*a)->content, maxnmb(*a))[j] == '0')
				pb(b, a);
			else
				ra(a);
		}
		while (*b)
			pa(a, b);
		j++;
	}
	rstack(a, b);
}
