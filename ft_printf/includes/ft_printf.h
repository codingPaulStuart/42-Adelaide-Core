/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:39:43 by pstuart           #+#    #+#             */
/*   Updated: 2022/04/01 13:07:38 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_printf(const char *str, ...);

size_t	ft_numlen(int value);
size_t	ft_ptrlen(uintptr_t value);
size_t	ft_hexlen(unsigned int value);

void	ft_printid(int value, int *counter);
void	ft_putptr(uintptr_t num);
void	ft_printp(unsigned long long value, int *counter);
void	ft_printu(unsigned int value, int *counter);
void	ft_puthex(unsigned int num, const char c);
void	ft_printhex(unsigned int value, const char c, int *counter);

#endif