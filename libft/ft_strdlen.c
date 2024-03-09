/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:55:55 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 10:56:20 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Same as strlen only has a delimeter to show length at a set point

#include "libft.h"

size_t	ft_strdlen(const char *string, char delimeter)
{
	size_t	i;

	i = 0;
	while (string[i] && string[i] != delimeter)
	{
		i++;
	}
	return (i);
}
