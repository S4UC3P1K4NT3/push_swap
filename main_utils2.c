/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:53:54 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/28 09:44:58 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
		free(tab[i++]);
	free(tab);
}

static int	addnmb(char *word, t_stack **a_stack, int *strategy)
{
	int	check;

	check = check4flags(word);
	if (check > 0 && *strategy == 5)
		*strategy = check;
	else if (check == 0 && dupecheck(word, *a_stack) == 0)
		ft_stackadd_back(a_stack, ft_atoi(word));
	else
		return (-1);
	return (0);
}

int	parsearg(char *arg, t_stack **a_stack, int *strategy, int *split)
{
	char	**tab;
	int		j;
	int		error;
	int		i;

	i = 0;
	j = 0;
	error = 0;
	while (arg[i] && arg[i] != ' ')
		i++;
	if (arg[i])
	{
		if (*split || ft_stacklen(*a_stack) > 0)
			return (-1);
		*split = 1;
	}
	else if (*split && check4flags(arg) == 0)
		return (-1);
	tab = ft_split(arg, ' ');
	if (!tab || !tab[0])
		return (freetab(tab), -1);
	while (tab[j] && error == 0)
		error = addnmb(tab[j++], a_stack, strategy);
	freetab(tab);
	return (error);
}
