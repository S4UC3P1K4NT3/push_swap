/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:52:36 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/21 09:33:16 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	size_t			compt;

	tab = (unsigned char *) s;
	compt = 0;
	while (compt < n)
	{
		tab[compt] = 0;
		compt++;
	}
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char	test[50] = "Welcome to onsenfoudureste";
// 	char	test2[50] = "Welcome to onsenfoudureste";

// 	ft_bzero(test, 7);
// 	printf("resultat du test donne : %s\n", test);
// 	bzero(test2, 7);
// 	printf("resultat reel fonction : %s\n", test2);
// 	return (0);
// }
