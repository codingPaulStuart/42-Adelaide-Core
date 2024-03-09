/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:02:58 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 13:37:03 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a substringfrom the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	remain;

	if (start > ft_strlen(s))
		remain = 0;
	else
		remain = ft_strlen(s + start);
	if (remain < len)
		len = remain;
	result = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < len && s[i + start])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
