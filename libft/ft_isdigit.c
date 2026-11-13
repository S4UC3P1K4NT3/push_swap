/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:54:53 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:00:11 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("%d\n",ft_isdigit('1'));
//     printf("%d\n",isdigit('1'));
//     return 0;
// }
