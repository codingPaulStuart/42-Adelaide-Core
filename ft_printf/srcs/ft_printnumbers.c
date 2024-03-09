/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:02:59 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/30 13:03:04 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_numlen(int value)
{
	size_t	total;

	total = 0;
	if (value <= 0)
		total++;
	while (value)
	{
		total++;
		value /= 10;
	}
	return (total);
}

void	ft_printid(int value, int *counter)
{
	ft_putnbr_fd(value, 1);
	(*counter) += ft_numlen(value);
}

void	ft_printu(unsigned int value, int *counter)
{
	if (value >= 10)
		ft_printu(value / 10, counter);
	ft_putchar_fd(value % 10 + '0', 1);
	(*counter)++;
}
