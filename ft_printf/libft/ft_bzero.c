/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:19:11 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/04 12:50:04 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Zeros out the memory in region, takes the starting addesss in memory
// second argument takes the number of bytes to be zeroed out.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (n--)
		*ptr++ = 0;
}
