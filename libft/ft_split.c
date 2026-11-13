/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 22:15:17 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 10:24:27 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_word(const char *s, size_t i, char c)
{
	char	*word;
	size_t	in;

	in = i;
	while (s[i] != c && s[i] != 0)
		i++;
	word = malloc((i - in + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = in;
	in = 0;
	while (s[i] != c && s[i] != 0)
	{
		word[in] = s[i];
		i++;
		in++;
	}
	word[in] = 0;
	return (word);
}

static size_t	count_words(char const *s, char c)
{
	size_t	t;
	size_t	count;

	count = 0;
	t = 0;
	while (s[t])
	{
		if ((s[t] != c && s[t + 1] == c) || (s[t] != c && s[t + 1] == 0))
		{
			count++;
		}
		t++;
	}
	return (count);
}

static size_t	skip_word_index(const char *s, size_t i, char c)
{
	while (s[i] != c && s[i] != 0)
		i++;
	while (s[i] == c && s[i] != 0)
		i++;
	return (i);
}

static void	*safety(char **res, size_t i)
{
	while (i > 0)
		free(res[--i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	index;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	index = 0;
	while (s[index] == c)
		index++;
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < count_words(s, c))
	{
		res[i] = get_word(s, index, c);
		if (!res[i])
			return (safety(res, i));
		index = skip_word_index(s, index, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*in[] =
// 	{
// 		"", "   ", ",,,", "abc", "ab cd", "  ab cd  efg ",
// 		",a,b", "a,b,", ",,a,,b,,", "a b c d", " a ", "hello world",
// 		"xxaxxbxx"
// 	};
// 	char	sep[] =
// 	{
// 		' ', ' ', ',', ' ', ' ', ' ', ',', ',', ',', ' ',
// 		' ', ',', 'x'
// 	};
// 	char	*exp[] =
// 	{
// 		"{NULL}", "{NULL}", "{NULL}", "{abc, NULL}",
// 		"{ab, cd, NULL}", "{ab, cd, efg, NULL}", "{a, b, NULL}",
// 		"{a, b, NULL}", "{a, b, NULL}", "{a, b, c, d, NULL}",
// 		"{a, NULL}", "{hello world, NULL}", "{a, b, NULL}"
// 	};
// 	char	**tab;
// 	int		t;
// 	int		i;

// 	t = 0;
// 	while (t < 13)
// 	{
// 		tab = ft_split(in[t], sep[t]);
// 		printf("Test %2d : ft_split(\"%s\", '%c')\n", t + 1, in[t], sep[t]);
// 		printf("   obtenu  : {");
// 		i = 0;
// 		while (tab && tab[i])
// 		{
// 			printf("%s, ", tab[i]);
// 			free(tab[i]);
// 			i++;
// 		}
// 		printf("NULL}\n   attendu : %s\n\n", exp[t]);
// 		free(tab);
// 		t++;
// 	}
// 	return (0);
// }
