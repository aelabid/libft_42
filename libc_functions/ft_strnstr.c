/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:45:04 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/17 11:05:46 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		save;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((i < len) && (haystack[i]))
	{
		save = i;
		j = 0;
		while (needle[j] && haystack[i] && i < len
			&& haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		i = save;
		i++;
		if (needle[j] == '\0')
			return ((char *) &haystack[save]);
	}
	return (0);
}
