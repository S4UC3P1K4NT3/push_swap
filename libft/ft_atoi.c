/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:54:57 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/23 14:58:24 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	pos;
	int	sign;

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
	return (sign * res);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	test1[] = "   -42abc";
// 	char	test2[] = "INT_MAX";
// 	char	test3bizarre[] = "-214748399649";
// 	char	test4[] = " \n\t\t -9999999999999999999999999999";
// 	char	test5[] = " \n+30948ab99";
// 	char	test6[] = " \n\t\t --+9990&&99";

// 	printf("ma ft   : %d\n", ft_atoi(test1));
// 	printf("vrai ft : %d\n", atoi(test1));
// 	printf("ma ft   : %d\n", ft_atoi(test2));
// 	printf("vrai ft : %d\n", atoi(test2));
// 	printf("ma ft   : %d\n", ft_atoi(test3bizarre));
// 	printf("vrai ft : %d\n", atoi(test3bizarre));
// 	printf("ma ft   : %d\n", ft_atoi(test4));
// 	printf("vrai ft : %d\n", atoi(test4));
// 	printf("ma ft   : %d\n", ft_atoi(test5));
// 	printf("vrai ft : %d\n", atoi(test5));
// 	printf("ma ft   : %d\n", ft_atoi(test6));
// 	printf("vrai ft : %d\n", atoi(test6));
// 	return (0);
// }
