/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:49:03 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/26 11:11:06 by gtomasin         ###   ########.fr       */
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

int	int_max_check(const char *str)
{
	long long int	res;
	int				pos;
	int				sign;

	sign = 1;
	res = 0;
	pos = 0;
	while ((str[pos] <= 13 && str[pos] >= 9) || str[pos] == 32)
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = sign * -1;
		pos++;
	}
	while (ft_isdigit(str[pos]))
	{
		res = (res * 10) + (str[pos] - 48);
		pos++;
	}
	res = res * sign;
	if (res > 2147483647 || res < -2147483648)
		return (-2);
	return (0);
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
		return (int_max_check(str));
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

int	dupecheck(char *str, t_stack *lst)
{
	int	nmb;

	nmb = ft_atoi(str);
	lst = ft_stackfirst(lst);
	while (lst)
	{
		if (lst->content == nmb)
			return (1);
		lst = lst->next;
	}
	return (0);
}
