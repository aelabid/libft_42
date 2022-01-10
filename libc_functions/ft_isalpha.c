/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:07:24 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/06 08:39:44 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isalpha(int characterTest)
{
	if ((characterTest >= 'A' && characterTest <= 'Z')
		|| (characterTest >= 'a' && (characterTest <= 'z')))
		return (1);
	else
		return (0);
}
