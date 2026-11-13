/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 19:48:54 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/23 22:06:58 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(const char s1, char const *set)
{
	size_t	c;

	c = 0;
	while (set[c] != 0)
	{
		if (set[c] == s1)
			return (0);
		c++;
	}
	return (1);
}

static size_t	lbcheck(char const *s1, char const *set)
{
	size_t	count;

	count = 0;
	while (check(s1[count], set) == 0)
	{
		count++;
	}
	return (count);
}

static size_t	lecheck(char const *s1, char const *set)
{
	size_t	e;
	size_t	count;

	count = 0;
	e = ft_strlen(s1);
	while (e > 0 && check(s1[e - 1], set) == 0)
	{
		count++;
		e--;
	}
	if (lbcheck(s1, set) + count >= ft_strlen(s1))
		count = 0;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	size_t	count;
	char	*res;
	size_t	len;

	if (!s1 || !set || ft_strlen(s1) == 0)
		return (res = ft_calloc(sizeof(char), 1));
	count = 0;
	beg = lbcheck(s1, set);
	end = lecheck(s1, set);
	len = ft_strlen(s1) - beg - end;
	res = malloc(((ft_strlen(s1) - (beg + end)) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (count < len)
	{
		res[count] = s1[beg + count];
		count++;
	}
	res[count] = 0;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", "coucou");
// 	printf("%s\n", ft_strtrim("  bonjour a toute zetatousse", " "));
// 	printf("%s\n", ft_strtrim(".+-*/*-.bonjour*-+.-**/", ".+-*/"));
// }
