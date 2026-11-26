/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:53:54 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/26 14:40:20 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**ssplit(t_stack **a_stack, char **args)
{
	char	*str;
	int		i;

	i = 0;
	str = args[1];
	if (args[2] && check4flags(args[2]) < 0)
		str = args[2];
	while (str[i])
	{
		while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
			i++;
		while (str[i] <= '9' && str[i] >= '0')
		{
			ft_stackadd_back(a_stack, ft_atoi(&str[i]));
			i++;
		}
	}
	return (a_stack);
}

int	checkvalint(char *str)
{
	int	min;

	min = 0;
	while (str)
	{
		if (((*str <= 13 && *str >= 9) || *str == 32) || (*str <= '9' && *str >= '0'))
			str++;
		else
			return (-1);
		if (*str <= '9' && *str >= '0')
			min++;
	}
	if (min == 0)
		return (-1);
	else
		return (0);
}

int	splitmain(char **args)
{
	int	strategy;

	strategy = -1;
	if ((check4flags(args[1]) < 0 && args[2]) && (checkvalint(args[1])))
		strategy = check4flags(args[2]);
	else if (check4flags(args[2]) < 0 && (checkvalint(args[2])))
		strategy = check4flags(args[1]);
	return (strategy);
}
