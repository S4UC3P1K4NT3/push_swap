/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:55:36 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/22 10:21:53 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int s, size_t size)
{
	const unsigned char	*m;

	m = (const unsigned char *) mb;
	while (size--)
	{
		if (*m == (unsigned char) s)
			return ((void *) m);
		m++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	const char	*str2 = "Longtestttt";
// 	const char	*str3 = "Hi\0Hitest";

// 	printf("ma ft   : %s\n", (char *) ft_memchr(str, 'W', 13));
// 	printf("vrai ft : %s\n", (char *) memchr(str, 'W', 13));
// 	printf("ma ft   : %s\n", (char *) ft_memchr(str2, 't', 6));
// 	printf("vrai ft : %s\n", (char *) memchr(str2, 't', 6));
// 	printf("ma ft   : %s\n", (char *) ft_memchr(str3, '\0', 30));
// 	printf("vrai ft : %s\n", (char *) memchr(str3, '\0', 30));
// 	return (0);
// }
