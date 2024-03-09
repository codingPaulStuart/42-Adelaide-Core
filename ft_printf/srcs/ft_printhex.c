/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:41:40 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/30 12:05:08 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_hexlen(unsigned int value)
{
	size_t	total;

	total = 0;
	if (value <= 0)
		total++;
	while (value)
	{
		total++;
		value /= 16;
	}
	return (total);
}

void	ft_puthex(unsigned int num, const char c)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, c);
		ft_puthex(num % 16, c);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

void	ft_printhex(unsigned int value, const char c, int *counter)
{
	if (value == 0)
		(*counter) += (write(1, "0", 1));
	else
	{
		ft_puthex(value, c);
		(*counter) += ft_hexlen(value);
	}
}
