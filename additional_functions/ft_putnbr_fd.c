/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:59:52 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/11 16:15:06 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	execute(long nb, int fd)
{
	if (nb <= 9)
		ft_putchar_fd(nb % 10 + '0', fd);
	else
	{
		execute(nb / 10, fd);
		execute(nb % 10, fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	i;

	if (nb >= 0)
		execute(nb, fd);
	else if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		i = nb * -1;
		ft_putchar_fd('-', fd);
		execute(i, fd);
	}
}
