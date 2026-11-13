/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:39:58 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/13 15:19:09 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

static void	add_node(t_stack **stack, char *str)
{
	(void) stack;
	ft_printf("node \"%s\" added during the test.\n", str);
}

static int	get_error(char *error, int errcode)
{
	if (errcode == 2)
		ft_printf("too much flags used \"%s\",aborting.\n", error);
	else
		ft_printf("invalid argument given (\"%s\"), aborting.\n", error);
	return (1);
}

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
			add_node(a_stack, argv[i]);
		else if (strategy == 5 && check4flags(argv[i]) > 0)
			strategy = check4flags(argv[i]);
		else if (strategy != 5 && check4flags(argv[i]) > 0)
			return (get_error(argv[i], 2));
		else
			return (get_error(argv[i], 1));
	}
	return (0);
}
