/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:33:37 by gtomasin          #+#    #+#             */
/*   Updated: 2026/11/20 16:52:31 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "libft.h"

typedef struct s_stack
{
	struct s_stack	*prev;
	int				content;
	struct s_stack	*next;
}	t_stack;
int		check4flags(char *str);
int		is_integer(char *str);
int		is_flag(char *str, char *flag);
void	ft_stackadd_back(t_stack **lst, int content);
t_stack	*new_stack(int content);
t_stack	*ft_stacklast(t_stack *lst);
t_stack	*ft_stackfirst(t_stack *lst);
size_t	ft_stacklen(t_stack *stack);
int		dupecheck(char *str, t_stack *lst);

void	sa(t_stack **lst);
void	sb(t_stack **lst);
void	ss(t_stack **lsta, t_stack **lstb);
void	pa(t_stack **lsta, t_stack **lstb);
void	pb(t_stack **lstb, t_stack **lsta);
void	ra(t_stack **lst);
void	rb(t_stack **lst);
void	rr(t_stack **lsta, t_stack **lstb);
void	rra(t_stack **lst);
void	rrb(t_stack **lst);
void	rrr(t_stack **lsta, t_stack **lstb);
void	bucket_sort(t_stack **a, t_stack **b);
int		compute_disorder(t_stack *a);
void	bubble_sort(t_stack **a);
#endif
