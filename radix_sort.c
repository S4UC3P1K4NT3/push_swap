/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   radix_sort.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/22 10:56:43 by username         #+#    #+#              */
/*   Updated: 2026/11/22 18:27:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static int	sorted_check(t_stack *a)
{
	int	mistakes;

	mistakes = 0;
	a = ft_stackfirst(a);
	while (a->next)
	{
		if (a->content > a->next->content)
			mistakes += 1;
		a = a->next;
	}
	return (mistakes);
}

static int	bnrylen(int mx)
{
	int	i;

	i = 1;
	while (mx = mx / 2)
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
		printf("func test (pos):%s\n", res);
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

void	radix_sort(t_stack **a, t_stack **b)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_stacklen(*a);
	j = 0;
	while (j < bnrylen(maxnmb(*a)))
	{
		i = 0;
		while (i < len)
		{
			if (itob(a->content, maxnmb(*a))[j] == 0)
				pb(b, a);
			else
				ra(a);
			*a = ft_stackfirst(*a);
			i++;
		}
		j++;
	}
}
