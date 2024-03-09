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

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	b;

	i = 0;
	b = c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != b)
		i++;
	if (s[i] == b)
		return ((char *)s + i);
	return (NULL);
}
