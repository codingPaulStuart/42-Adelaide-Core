/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:41:33 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/09 11:03:26 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares bytes of memory represetned by n, passes in 2 blocks of memory and
// Returns less than, greater than or equal to in its comparison (< 0, > 0, =) 

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
