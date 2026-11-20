/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 00:34:18 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/20 13:33:36 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_nodes2(t_stack *stack)
{
	stack = ft_stackfirst(stack);
	while (stack != NULL)
	{
		ft_printf("%d ", stack->content);
		stack = stack->next;
	}
}

void	bubble_sort(t_stack **a)
{
	size_t	i;
	size_t	j;
	size_t	len;

	ft_printf("last node :%d\n", ft_stacklast(*a)->content);
	len = ft_stacklen(*a);
	i = 0;
	while (compute_disorder(ft_stackfirst(*a)) > 0 && i < len - 1)
	{
		j = 0;
		*a = ft_stacklast(*a);
		while (compute_disorder(ft_stackfirst(*a)) > 0 && j++ < len - 1)
		{
			if ((*a)->content < (*a)->prev->content)
				sa(a);
			print_nodes2(*a);
			ra(a);
			print_nodes2(*a);
			*a = ft_stacklast(*a);
			*a = (*a)->prev;
		}
		i++;
	}
}
