/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 09:39:58 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/13 10:29:34 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

static int	is_flag(char *str, char *flag)
{
	int	i;

	i = 0;
	while (str[i] && flag[i] && str[i] == flag[i])
		i++;
	return (str[i] == flag[i]);
}

static int	is_integer(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (0);
	return (-1);
}

static int	check4flags(char *str)
{
	if (!str)
		return (-1);
	if (is_flag(str, "--simple"))
		return (1);
	if (is_flag(str, "--medium"))
		return (2);
	if (is_flag(str, "--complex"))
		return (3);
	if (is_flag(str, "--adaptive"))
		return (4);
	return (is_integer(str));
}

int	main(int argc, char *argv[])
{
	int		i;
	int		strategy;
	t_stack	**a_stack;

	i = 0;
	strategy = 4;
	while (argv[++i])
	{
		if (check4flags(argv[i]) == 0)
			add_node(a_stack);
		else
			strategy = check4flags(argv[i]);
	}
}
