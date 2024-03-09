/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:25:03 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 10:22:24 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies the character (c) to the first (len) characters of the string pointer
// to, by the argument (*b). It returns the pointer to the block of memory

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
