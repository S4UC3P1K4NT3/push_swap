/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:04:20 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 17:18:20 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	while (i < destsize && dest[i])
		i++;
	dest_len = i;
	if (i == destsize)
		return (destsize + src_len);
	while (src[j] && (i + j + 1) < destsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < destsize)
		dest[i + j] = '\0';
	return (dest_len + src_len);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dep[50] = "cedric";
// 	char	arr[50] = "test ";
// 	char	dep1[50] = "cedric";
// 	char	arr1[50] = "test ";

// 	printf("%ld\n", ft_strlcat(arr, dep, 6));
// 	printf("%s\n", arr);
// 	printf("%ld\n", strlcat(arr1, dep1, 6));
// 	printf("%s\n", arr1);
// }
