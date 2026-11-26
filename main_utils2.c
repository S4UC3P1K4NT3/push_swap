/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:53:54 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/26 11:50:15 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	checkvalint(char *str)
{
	while (str)
	{
		while ((str <= 13 && str >= 9) || str == 32)
			str++;
		while (str < "9" && str > "0")
			str++;
	}
}

int	splitmain(char **args)
{
	int	strategy;

	strategy = 5;
	if (check4flags(args[1]) < 0 && args[2])
		strategy = check4flags(args[2]);
	else if (args[2])
		strategy = check4flags(args[1]);
	return (strategy);
}
