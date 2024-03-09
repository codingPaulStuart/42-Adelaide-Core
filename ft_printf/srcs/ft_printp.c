/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:26:42 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/30 13:37:59 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_ptrlen(uintptr_t value)
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

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	ft_printp(unsigned long long value, int *counter)
{
	(*counter) += write(1, "0x", 2);
	if (value == 0)
		(*counter) += (write(1, "0", 1));
	else
	{
		ft_putptr(value);
		(*counter) += ft_ptrlen(value);
	}
}
