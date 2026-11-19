/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 09:39:58 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/20 00:53:06 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compute_disorder(t_stack *a)
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

static int	print_nodes(t_stack *stack)
{
	stack = ft_stackfirst(stack);
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
	return (0);
}

static int	sort(int strategy, t_stack **a, t_stack **b)
{
	// if (strategy == 3)
	// 	return (merge_sort(a, b), print_nodes(*a));
	// else if (strategy == 2)
	// 	return (bucket_sort(a), print_nodes(*a));
	// else if (strategy == 1)
	// 	return (bubble_sort(a), print_nodes(*a));
	// else if (strategy == 4 || strategy == 5)
	// {
	// 	return ;
	// }
	bubble_sort(a);
	print_nodes(*a);
	return (0);
}

static int	get_error(char *er, int errcode)
{
	if (errcode == 2)
		ft_printf("too much flags used \"%s\", aborting.\n", er);
	if (errcode == 3)
		ft_printf("numbers cannot be duplicates \"%s\", aborting.\n", er);
	if (errcode == 4)
		ft_printf("value goes beyond integer's limits \"%s\", aborting.\n", er);
	else
		ft_printf("invalid argument given (\"%s\"), aborting.\n", er);
	return (1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		strategy;
	t_stack	*a_stack;
	t_stack	*b_stack;

	i = 0;
	a_stack = NULL;
	b_stack = NULL;
	strategy = 5;
	while (argv[++i] && i < argc)
	{
		if (check4flags(argv[i]) == 0 && dupecheck(argv[i], a_stack) == 0)
			ft_stackadd_back(&a_stack, ft_atoi(argv[i]));
		else if (strategy == 5 && check4flags(argv[i]) > 0)
			strategy = check4flags(argv[i]);
		else if (strategy != 5 && check4flags(argv[i]) > 0)
			return (get_error(argv[i], 2));
		else if (check4flags(argv[i]) == 0 && dupecheck(argv[i], a_stack) == 1)
			return (get_error(argv[i], 3));
		else if (check4flags(argv[i]) == -2)
			return (get_error(argv[i], 4));
		else
			return (get_error(argv[i], 1));
	}
	return (sort(strategy, &a_stack, &b_stack));
}
