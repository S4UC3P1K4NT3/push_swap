/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main_utils.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 12:49:03 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/13 12:51:40 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_flag(char *str, char *flag)
{
	int	i;

	i = 0;
	while (str[i] && flag[i] && str[i] == flag[i])
		i++;
	return (str[i] == flag[i]);
}

int	is_integer(char *str)
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

int	check4flags(char *str)
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
