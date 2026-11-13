/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:48:13 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 12:20:16 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (!s || !f)
		return (NULL);
	i = 0;
	dst = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}

// #include <stdio.h>

// char	upper(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// }

// int	main(void)
// {
// 	char	str[] = "tout mettre maj";

// 	printf("%s\n", ft_strmapi(str, upper));
// 	return (0);
// }
