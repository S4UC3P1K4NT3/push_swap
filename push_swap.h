/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 09:33:37 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/15 15:23:37 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "libft.h"

typedef struct s_stack
{
	struct stack	*prev;
	int				content;
	struct stack	*next;
}	t_stack;
int		check4flags(char *str);
int		is_integer(char *str);
int		is_flag(char *str, char *flag);
void	ft_stackadd_back(t_stack **lst, int content);
t_stack	*new_stack(void *content);
t_stack	*ft_stacklast(t_stack *lst);
t_stack	*ft_stackfirst(t_stack *lst);

#endif
