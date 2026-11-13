/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 00:26:55 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 10:58:06 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

static char	*rchar(char *srcdst, size_t len)
{
	char	tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = srcdst[i];
		srcdst[i] = srcdst[j];
		srcdst[j] = tmp;
		j--;
		i++;
	}
	return (srcdst);
}

static char	*fill(long long n, char *dest)
{
	size_t	i;
	size_t	temp;

	i = 0;
	temp = intlen(n);
	while (i < temp)
	{
		dest[i] = (char)(n % 10 + '0');
		n /= 10;
		i++;
	}
	dest[i] = 0;
	return (rchar(dest, temp));
}

char	*ft_itoa(int n)
{
	char		*res;
	int			sign;
	long long	n_long;

	sign = 0;
	n_long = (long long) n;
	res = malloc((intlen(n_long) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		n_long = -n_long;
		res[0] = '-';
	}
	fill(n_long, &res[sign]);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("main :%s\n", ft_itoa(-2147483648));
// }
