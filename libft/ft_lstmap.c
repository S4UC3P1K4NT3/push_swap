/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:42:26 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 13:15:13 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <stdlib.h>

// void	suppr(void *content)
// {
// 	free(content);
// }

// void	*upper(void *content)
// {
// 	char	*str;
// 	int		i;

// 	str = ft_strdup((char *) content);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] = str[i] - 32;
// 		i++;
// 	}
// 	return ((void *) str);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_list;
// 	t_list	*tmp;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("bonjour")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("le")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("monde")));
// 	new_list = ft_lstmap(lst, upper, suppr);
// 	tmp = new_list;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *) tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&lst, suppr);
// 	ft_lstclear(&new_list, suppr);
// 	return (0);
// }
