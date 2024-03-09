/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:53:01 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/04 13:20:23 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function returns a pointer to a null-terminated byte string, which is 
// a duplicate of the string pointed to by (s1). The memory obtained is done 
// dynamically using malloc and hence it can be freed using free(). 
// It returns a pointer to the duplicated string s.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!copy)
	{
		return (NULL);
	}
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
