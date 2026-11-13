/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:05:30 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:00:10 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("test avec a               : %d\n",ft_isascii('a'));
//     printf("test vrai fonction avec a : %d\n",isascii('a'));
//     printf("test avec A               : %d\n",ft_isascii('A'));
//     printf("test vrai fonction avec A : %d\n",isascii('A'));
//     printf("test avec 0               : %d\n",ft_isascii('0'));
//     printf("test vrai fonction avec 0 : %d\n",isascii('0'));
//     printf("test avec €               : %d\n",ft_isascii("€"[0]));
//     printf("test vrai fonction avec € : %d\n",isascii("€"[0]));
//     return 0;
// }
