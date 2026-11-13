/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:58:52 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:00:06 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("test avec a                : %d\n",ft_isalnum('a'));
//     printf("test avec a (vrai fonction): %d\n",isalnum('a'));
//     printf("test avec A                : %d\n",ft_isalnum('A'));
//     printf("test avec A (vrai fonction): %d\n",isalnum('A'));
//     printf("test avec 0                : %d\n",ft_isalnum('0'));
//     printf("test avec 0 (vrai fonction): %d\n",isalnum('0'));
//     printf("test avec *                : %d\n",ft_isalnum('*'));
//     printf("test avec * (vrai fonction): %d\n",isalnum('*'));
//     return 0;
// }
