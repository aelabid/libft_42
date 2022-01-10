/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:26:23 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/11 16:19:12 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*ndst;
	const unsigned char		*nsrc;
	size_t					i;

	ndst = (unsigned char *) dst;
	nsrc = (const unsigned char *) src;
	i = 0;
	if (ndst == 0 && nsrc == 0)
		return (0);
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (ndst);
}
