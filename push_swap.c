/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:39:58 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/13 13:27:37 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		strategy;
	t_stack	**a_stack;

	i = 0;
	a_stack = NULL;
	strategy = 5;
	while (argv[++i] && i < argc)
	{
		if (check4flags(argv[i]) == 0)
			add_node(a_stack);
		else if (strategy == 5 && check4flags(argv[i]) > 0)
			strategy = check4flags(argv[i]);
		else if (strategy != 5 && check4flags(argv[i]) > 0)
		{
			ft_printf("too much flags used '%s'.", argv[i]);
			return (1);
		}
		else
		{
			ft_printf("invalid argument given ('%s').", argv[i]);
			return (1);
		}
	}
	return (0);
}
