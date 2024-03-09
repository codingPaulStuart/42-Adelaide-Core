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

// Allocates (with malloc(3)) and returns a copy of’s1’ with the characters 
// specified in ’set’ removed from the beginning and the end of the string.

#include "libft.h"

static int	match(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	int		i;
	char	*result;

	if (!(s1 || set))
		return ((char *)s1);
	front = 0;
	while (s1[front] && match(s1[front], set))
		front++;
	back = ft_strlen(s1);
	while (back > front && match(s1[back -1], set))
		back--;
	result = malloc((back - front + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	i = 0;
	while (front < back)
		result[i++] = s1[front++];
	result[i] = '\0';
	return (&result[0]);
}
