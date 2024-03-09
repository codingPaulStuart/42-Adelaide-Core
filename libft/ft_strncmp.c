/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:43:49 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 11:12:09 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// String Function used to compare two strings. Or, it checks whether those 
// two strings are equal or not. The strncmp function uses the third argument 
// to limit the comparison. It means, instead of comparing the whole string, 
// you can compare the first four characters, or five characters, etc.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < (int)n - 1)
	{
		i++;
	}
	if (n)
	{
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}
