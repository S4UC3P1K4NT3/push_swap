/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 09:39:58 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/24 16:21:55 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ft_printf("%d ", stack->content);
		stack = stack->next;
	}
	ft_printf("\n");
	return (0);
}

double	compute_disorder(t_stack *a)
{
	int		mistakes;
	int		total_pairs;
	int		actualnmb;
	size_t	i;
	size_t	j;

	mistakes = 0;
	total_pairs = 0;
	i = 0;
	while (i++ < ft_stacklen(a) - 1)
	{
		a = ft_stackfirst(a);
		j = 0;
		while (j++ < i - 1)
			a = a->next;
		actualnmb = a->content;
		while (a->next != NULL)
		{
			a = a->next;
			if (actualnmb > a->content)
				mistakes++;
			total_pairs++;
		}
	}
	return ((double) mistakes / (double) total_pairs);
}

static int	sort(int strategy, t_stack **a, t_stack **b)
{
	if (strategy == 3)
		return (radix_sort(a, b), print_nodes(*a));
	else if (strategy == 2)
		return (bucket_sort(a, b), print_nodes(*a));
	else if (strategy == 1)
		return (bubble_sort(a), print_nodes(*a));
	else
	{
		if (compute_disorder(*a) < 0.2)
			return (bubble_sort(a), print_nodes(*a));
		else if (compute_disorder(*a) >= 0.2 && compute_disorder(*a) < 0.5)
			return (bucket_sort(a, b), print_nodes(*a));
		else
			return (radix_sort(a, b), print_nodes(*a));
	}
	return (0);
}

static int	get_error(char *er, int strategy, t_stack *a)
{
	if (strategy != 5 && check4flags(er) > 0)
		ft_printf("too much flags used \"%s\", aborting.\n", er);
	else if (dupecheck(er, a) == 1)
		ft_printf("numbers cannot be duplicates \"%s\", aborting.\n", er);
	else if (check4flags(er) == -2)
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
		else
			return (get_error(argv[i], strategy, a_stack));
	}
	return (sort(strategy, &a_stack, &b_stack));
}
