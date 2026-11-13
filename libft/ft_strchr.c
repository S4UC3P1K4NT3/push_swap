/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:34:15 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/22 10:53:19 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char) *s == (unsigned char) c)
			return ((char *) s);
		s++;
	}
	if ((unsigned char) *s == (unsigned char) c)
		return ((char *) s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strchr("bonjour a toute zetatousse", 'z'));
// }
