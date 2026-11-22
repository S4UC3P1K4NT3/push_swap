/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   bubble_sort.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/20 00:34:18 by username         #+#    #+#              */
/*   Updated: 2026/11/22 11:05:20 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sorted_check(t_stack *a)
{
	int	mistakes;

	mistakes = 0;
	while (a->next)
	{
		if (a->content > a->next->content)
			mistakes += 1;
		a = a->next;
	}
	return (mistakes);
}

void	bubble_sort(t_stack **a)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (sorted_check(ft_stackfirst(*a)) > 0 && i < ft_stacklen(*a))
	{
		j = 0;
		*a = ft_stacklast(*a);
		while (sorted_check(ft_stackfirst(*a)) > 0 && j++ < ft_stacklen(*a) - 1)
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
