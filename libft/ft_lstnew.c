/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 21:21:05 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/24 21:30:13 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return ((new));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Hello");
// 	printf("Contenu du noeud : %s\n", (char *) node->content);
// 	return (0);
// }
