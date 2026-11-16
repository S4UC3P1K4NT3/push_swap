/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 12:04:47 by gtomasin         #+#    #+#              */
/*   Updated: 2026/11/16 10:07:14 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_int(char c, int fd);
int	ft_putnbr_int(int nb, int fd);
int	ft_putstr_int(char *s, int fd);
int	ft_puthex(unsigned long nb, char *base);
int	ft_putunbr(unsigned int nb);

#endif
