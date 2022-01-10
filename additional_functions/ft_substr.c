/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:18:06 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/13 14:04:54 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nstr;

	i = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == 0)
		return (0);
	while (i < len && s[i] != '\0')
	{
		nstr[i] = s[start];
		i++;
		start++;
	}
	nstr[i] = '\0';
	return (nstr);
}
