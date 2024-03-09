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
	size_t			i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (s1_ptr[i] == s2_ptr[i] && i < n)
	{
		i++;
	}
	if (i < n)
		return (s1_ptr[i] - s2_ptr[i]);
	return (0);
}
