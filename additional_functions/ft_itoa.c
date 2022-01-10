/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:26:49 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/12 18:45:50 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_init(long *num, int *check, int n)
{
	int		i;
	long	k;

	i = 0;
	*check = 0;
	*num = n;
	k = n;
	if (n < 0)
	{
		*num = -*num;
		k = -k;
		i++;
		*check = 1;
	}
	while (k / 10 > 0)
	{
		k = k / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	num;
	char	*tab;
	int		check;

	i = ft_init(&num, &check, n);
	tab = (char *)malloc((i + 2) * sizeof(char));
	if (tab == 0)
		return (NULL);
	tab[i + 1] = '\0';
	while (i >= check)
	{
		tab[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	if (check != 0)
		tab[0] = '-';
	return (tab);
}
