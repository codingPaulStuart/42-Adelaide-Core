/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:44:47 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 14:08:05 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	b;

	i = 0;
	b = c;
	if (s == NULL)
		return (NULL);
	while (s[i])
		++i;
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)(s + i));
		--i;
	}
	return (NULL);
}
