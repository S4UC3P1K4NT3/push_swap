/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:31:41 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:00:13 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("test avec a                       : %d\n",ft_isprint('a'));
//     printf("test avec a (vrai fonction)       : %d\n",isprint('a'));
//     printf("test saut de ligne                : %d\n",ft_isprint('\n'));
//     printf("test saut de ligne (vrai fonction): %d\n",isprint('\n'));
//     return 0;
// }
