/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 23:54:35 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/25 00:23:42 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;

// 	node1.content = "Premier insere (devient le 2eme)";
// 	node1.next = NULL;
// 	node2.content = "Nouveau insere (devient le 1er)";
// 	node2.next = NULL;
// 	t_list	*ma_liste = &node1;

// 	ft_lstadd_front(&ma_liste, &node2);
// 	printf("Index 0  : %s\n", (char *) ma_liste->content);
// 	printf("Index 1  : %s\n", (char *) ma_liste->next->content);
// 	return (0);
// }
