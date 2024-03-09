/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:02:35 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 13:25:05 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 == NULL)
		return (NULL);
	else if (set == NULL)
		return (ft_strdup(s1));
	else
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]) != NULL)
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) != NULL && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str == NULL)
			return (NULL);
		else
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
