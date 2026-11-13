/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 18:06:23 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/25 18:45:29 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;

// 	node1.content = "debut";
// 	node1.next = NULL;
// 	node2.content = "main debuggé par rlebaill";
// 	node2.next = NULL;
// 	t_list	*list = NULL;

// 	ft_lstadd_back(&list, &node2);
// 	printf("apres fonction :%s\n", list->content);
// }
