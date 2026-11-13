/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:27:58 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 13:07:24 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(strdup("Premier"));
// 	lst->next = ft_lstnew(strdup("Deuxième"));
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("ca fait nul trop fort !\n");
// 	else
// 		printf("lst n'est pas NULL donc t nul.\n");
// 	return (0);
// }
