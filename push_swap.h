/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:33:37 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/13 13:18:09 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	struct stack	*prev;
	int				content;
	struct stack	*next;
}	t_stack;
int	check4flags(char *str);
int	is_integer(char *str);
int	is_flag(char *str, char *flag);

#endif
