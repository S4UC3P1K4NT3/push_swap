/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:51:07 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 12:10:59 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void	upper(void *val)
// {
// 	char	*c = (char *) val;

// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	t_list	*node1 = malloc(sizeof(t_list));
// 	t_list	*node2 = malloc(sizeof(t_list));
// 	t_list	*node3 = malloc(sizeof(t_list));
// 	char	c1 = 'a';
// 	char	c2 = 'b';
// 	char	c3 = 'c';

// 	node1->content = &c1;
// 	node1->next = node2;
// 	node2->content = &c2;
// 	node2->next = node3;
// 	node3->content = &c3;
// 	node3->next = NULL;
// 	ft_lstiter(node1, upper);
// 	printf("%c\n", *(char *)(node1->content));
// 	printf("%c\n", *(char *)(node2->content));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
