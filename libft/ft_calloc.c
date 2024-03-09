/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:49:23 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 13:38:10 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;
	int		length;

	length = size * count;
	ptr = malloc(length);
	i = 0;
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, length);
	return (ptr);
}
