/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:39:58 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/16 11:37:01 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_nodes(t_stack *stack)
{
	ft_printf("=====================================================");
	ft_printf("==================\n\n");
	ft_printf("██████╗ ██╗   ██╗███████╗██╗  ██╗    ");
	ft_printf("███████╗██╗    ██╗ █████╗ ██████╗ \n");
	ft_printf("██╔══██╗██║   ██║██╔════╝██║  ██║    ");
	ft_printf("██╔════╝██║    ██║██╔══██╗██╔══██╗\n");
	ft_printf("██████╔╝██║   ██║███████╗███████║    ");
	ft_printf("███████╗██║ █╗ ██║███████║██████╔╝\n");
	ft_printf("██╔═══╝ ██║   ██║╚════██║██╔══██║    ");
	ft_printf("╚════██║██║███╗██║██╔══██║██╔═══╝ \n");
	ft_printf("██║     ╚██████╔╝███████║██║  ██║    ");
	ft_printf("███████║╚███╔███╔╝██║  ██║██║     \n");
	ft_printf("╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ");
	ft_printf("╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     \n");
	ft_printf("=====================================================");
	ft_printf("==================\n\n");
	while (stack != NULL)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

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
	t_stack	*a_stack;

	i = 0;
	a_stack = NULL;
	strategy = 5;
	while (argv[++i] && i < argc)
	{
		if (check4flags(argv[i]) == 0)
			ft_stackadd_back(&a_stack, ft_atoi(argv[i]));
		else if (strategy == 5 && check4flags(argv[i]) > 0)
			strategy = check4flags(argv[i]);
		else if (strategy != 5 && check4flags(argv[i]) > 0)
			return (get_error(argv[i], 2));
		else
			return (get_error(argv[i], 1));
	}
	print_nodes(a_stack);
	return (0);
}
