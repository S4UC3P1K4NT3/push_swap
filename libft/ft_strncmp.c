/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:00:54 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/22 09:53:07 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello";
// 	const char	*str2 = "Hello, World!";
// 	const char	*str3 = "   \t";
// 	const char	*str4 = "   \n";

// 	printf("ma ft   : %d\n", ft_strncmp(str, str2, 3));
// 	printf("vrai ft : %d\n", strncmp(str, str2, 3));
// 	printf("ma ft   : %d\n", ft_strncmp(str, str2, 20));
// 	printf("vrai ft : %d\n", strncmp(str, str2, 20));
// 	printf("ma ft   : %d\n", ft_strncmp(str3, str4, 5));
// 	printf("vrai ft : %d\n", strncmp(str3, str4, 5));
// 	printf("ma ft   : %d\n", ft_strncmp(str3, str4, 2));
// 	printf("vrai ft : %d\n", strncmp(str4, str4, 2));
// 	return (0);
// }
