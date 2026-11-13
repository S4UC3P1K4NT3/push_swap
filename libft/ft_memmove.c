/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 16:13:25 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/24 15:12:49 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;
// 	size_t				compt;

// 	if (!dest || !src)
// 		return (NULL);
// 	d = (unsigned char *) dest;
// 	s = (const unsigned char *) src;
// 	compt = 0;
// 	while (compt < n)
// 	{
// 		d[compt] = s[compt];
// 		compt++;
// 	}
// 	return (dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (0 < n)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
//
// 	char	test[500] = "vzkqpmxruobwfyatcldneigshjkmzpqrwxvuboyft";
// 	char	*dest = &test[3];
// 	char	test2[500] = "vzkqpmxruobwfyatcldneigshjkmzpqrwxvuboyft";
// 	char	*dest2 = &test[3];
// 	char	test3[500] = "vzkqpmxruobwfyatcldneigshjkmzpqrwxvuboyft";
// 	char	dest3[500];
// 	char	test4[500] = "vzkqpmxruobwfyatcldneigshjkmzpqrwxvuboyft";
// 	char	dest4[500];

// 	printf("ma fonction sur 5  :%s\n", (char *) ft_memmove(dest, test, 5));
// 	printf("la fonction sur 5  :%s\n", (char *) memmove(dest2, test2, 5));
// 	printf("ma fonction sur 50 :%s\n", (char *) ft_memmove(dest, test, 50));
// 	printf("la fonction sur 50 :%s\n", (char *) memmove(dest2, test2, 50));
// }
