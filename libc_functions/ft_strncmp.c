/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:23:35 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/07 11:50:39 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ns1;
	unsigned char	*ns2;

	ns2 = (unsigned char *)s2;
	ns1 = (unsigned char *)s1;
	i = 0;
	j = 0;
	while (i < n && (ns1[i] || ns2[i]))
	{
		if (ns1[i] == ns2[i])
			i++;
		else
		{
			j = ns1[i] - ns2[i];
			return (j);
		}
	}
	return (0);
}
