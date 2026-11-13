/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:40:01 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/21 15:26:50 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	compt;

	compt = 0;
	while (s[compt] != '\0')
	{
		compt++;
	}
	return (compt);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%lu\n", ft_strlen("test cedric"));
// 	printf("%lu\n", strlen("test cedric"));
// }
