/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:05:03 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/22 10:53:07 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	const unsigned char	*pa1;
	const unsigned char	*pa2;
	size_t				i;

	pa1 = (const unsigned char *) p1;
	pa2 = (const unsigned char *) p2;
	i = 0;
	while (i < size)
	{
		if (pa1[i] != pa2[i])
			return (pa1[i] - pa2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello";
// 	const char	*str2 = "Hello, World!";
// 	const char	*str3 = "Hi\0Test";
// 	const char	*str4 = "Hi\0Aest";

// 	printf("ma ft   : %d\n", ft_memcmp(str, str2, 3));
// 	printf("vrai ft : %d\n", memcmp(str, str2, 3));
// 	printf("ma ft   : %d\n", ft_memcmp(str, str2, 20));
// 	printf("vrai ft : %d\n", memcmp(str, str2, 20));
// 	printf("ma ft   : %d\n", ft_memcmp(str3, str4, 5));
// 	printf("vrai ft : %d\n", memcmp(str3, str4, 5));
// 	printf("ma ft   : %d\n", ft_memcmp(str3, str4, 20));
// 	printf("vrai ft : %d\n", memcmp(str3, str4, 20));
// 	return (0);
// }
