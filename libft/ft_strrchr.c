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

// Last occurrence of given character in a string is found

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			last = i;
		i++;
	}
	if ((last >= 0 && last <= (int)ft_strlen(s + 1)) && s[i] != (char) c)
		return ((char *)&s[last]);
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}
