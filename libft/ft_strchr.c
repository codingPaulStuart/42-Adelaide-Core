/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:55:11 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 14:05:48 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Searches for the first occurrence of the character (c) in the string
// pointed to bt (s)

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
		{
			return ((char *)s);
		}
		s++;
	}
	if (i == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
