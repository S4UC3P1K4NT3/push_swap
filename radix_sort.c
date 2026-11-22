/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   radix_sort.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/22 10:56:43 by username         #+#    #+#              */
/*   Updated: 2026/11/22 11:09:51 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	maxbnrylen(int mx)
{
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
	char	*res;

	res = malloc()
}
