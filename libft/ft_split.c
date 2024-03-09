/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:44:58 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/09 11:22:00 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array of strings obtained by 
// splitting ’s’ using thecharacter ’c’ as a delimiter.  The array must end
// with a NULL pointer.

#include "libft.h"

static size_t	num_words(char const *s, char delim)
{
	size_t	i;
	size_t	count;
	char	tru;

	i = 0;
	count = 0;
	tru = 1;
	while (s[i])
	{
		if (tru && s[i] != delim)
		{
			tru = 0;
			count++;
		}
		else if (!tru && s[i] == delim)
			tru = 1;
		i++;
	}
	return (count);
}

static char	*fillstring(char const**s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[i] && (*s)[i] != c)
		i++;
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (str);
	ft_memcpy(str, *s, i);
	*s += i;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**strings;
	unsigned int	count;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	count = num_words(s, c);
	strings = ft_calloc(count + 1, sizeof(char *));
	if (!strings)
		return (strings);
	while (i < count)
	{
		strings[i] = fillstring(&s, c);
		if (!strings[i])
			return (0);
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
