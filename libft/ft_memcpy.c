/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 15:22:54 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/28 20:40:29 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				compt;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	compt = 0;
	while (compt < n)
	{
		d[compt] = s[compt];
		compt++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test[50] = "abcdef";
// 	char	*dest = &test[3];
// 	char	test2[50] = "efghij";
// 	char	*dest2 = &test[3];

// 	printf("ma fonction sur 5 octets :%s\n", (char *) ft_memcpy(dest, test, 5));
// 	printf("la fonction sur 5 octets :%s\n", (char *) memcpy(dest2, test2, 5));
// }
