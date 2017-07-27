/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 22:46:32 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/26 23:31:43 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cdu(char c, char d, char u)
{
	if (c == 7 && d == 8 && u == 9)
	{
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(u + '0');
	}
	else
	{
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(u + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				if (c != d && c != u && d != u)
				{
					ft_cdu(c, d, u);
					u++;
				}
			}
			d++;
		}
		c++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
