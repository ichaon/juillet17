/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:49:39 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/13 21:49:47 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (0 <= nb && nb < 10)
		ft_putchar(nb + '0');
}

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour < 11)
	{
		ft_putnbr(hour);
		write(1, ".00 A.M. AND ", 13);
		ft_putnbr(hour + 1);
		write(1, ".00 A.M.\n", 9);
	}
	else if (hour == 11)
		write(1, "11.00 A.M. AND 12.00 P.M.\n", 26);
	else if (12 <= hour && hour < 23)
	{
		ft_putnbr(hour - 12);
		write(1, ".00 P.M. AND ", 13);
		ft_putnbr(hour - 11);
		write(1, ".00 P.M.\n", 9);
	}
	else if (hour == 23)
		write(1, "11.00 P.M. AND 0.00 A.M.\n", 25);
}
