/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:42:19 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 13:47:30 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strnstr function locates the first occurrence of the null-terminated 
// string (needle) in the string (haystack), where not more than (len) 
// characters are searched. Characters that appear after a (\0) character 
// are not searched

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}	
			j++;
		}
		i++;
	}
	return (0);
}
