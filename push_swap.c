/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 09:39:58 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/15 15:25:41 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_error(char *error, int errcode)
{
	if (errcode == 2)
		ft_printf("too much flags used \"%s\", aborting.\n", error);
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
			ft_stackadd_back(a_stack, argv[i]);
		else if (strategy == 5 && check4flags(argv[i]) > 0)
			strategy = check4flags(argv[i]);
		else if (strategy != 5 && check4flags(argv[i]) > 0)
			return (get_error(argv[i], 2));
		else
			return (get_error(argv[i], 1));
	}
	return (0);
}
