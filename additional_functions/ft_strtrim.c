/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:18:50 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/12 16:43:51 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkf(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, s[i]) != 0 && s[i])
		i++;
	return (i);
}

static int	ft_checkl(char const *s, char const *set)
{
	int	i;

	i = ft_strlen(s);
	while (ft_strrchr(set, s[i]) != 0 && i >= 0)
		i--;
	if (i == -1)
		i = ft_strlen(s);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		checkf;
	int		checkl;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	checkl = ft_checkl(s1, set);
	checkf = ft_checkf(s1, set);
	str = malloc((checkl - checkf + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (checkf <= checkl)
		str[i++] = s1[checkf++];
	str[i] = '\0';
	return (str);
	return (0);
}
