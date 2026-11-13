/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 10:22:13 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/27 16:59:34 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	compt;

// 	compt = 0;
// 	while (s[compt] != '\0')
// 	{
// 		compt++;
// 	}
// 	return (compt);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	len;

	pos = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[pos] && pos < size - 1)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = 0;
	return (len);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	dep[50] = "test cedric";
// 	char	arr[50];
// 	char	dep1[50] = "test cedric";
// 	char	arr1[50];

// 	printf("%ld\n", ft_strlcpy(arr, dep, 1));
// 	printf("%s\n", arr);
// 	printf("%ld\n", strlcpy(arr1, dep1, 1));
// 	printf("%s\n", arr);
// }
