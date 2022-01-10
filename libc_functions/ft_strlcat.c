/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:31:33 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/17 11:08:15 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	b;

	i = 0;
	j = 0;
	b = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	k = i + j;
	if (j > dstsize)
		return (i + dstsize);
	i = 0;
	while (src[b] && dstsize > j + 1)
	{
		dest[j] = src[b];
		b++;
		j++;
	}
	dest[j] = '\0';
	return (k);
}
