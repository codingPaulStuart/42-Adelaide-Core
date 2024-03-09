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

#include "libft.h"

static	int	ft_wcount(char *s, char c)
{
	int	count;
	int	reset;

	count = 0;
	reset = 0;
	while (*s)
	{
		if (reset == 0 && *s != c)
		{
			reset = 1;
			++count;
		}
		else if (reset == 1 && *s == c)
			reset = 0;
		++s;
	}
	return (count);
}

static	int	ft_lengthofword(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static	void	*ft_freeup(char **ptr, int i)
{
	while (i > 0)
	{
		free(ptr[i]);
		--i;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		wcount;
	char	**ptr;
	int		i;

	if (!s)
		return (NULL);
	wcount = ft_wcount((char *)s, c);
	ptr = ((char **)malloc(sizeof(char *) * (wcount + 1)));
	if (!ptr)
		return (NULL);
	i = 0;
	while (wcount--)
	{
		while (*s == c && *s != '\0')
			++s;
		ptr[i] = ft_substr((char *)s, 0, ft_lengthofword((char *)s, c));
		if (!(ptr[i]))
			return (ft_freeup(ptr, i));
		s = s + ft_lengthofword((char *)s, c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
