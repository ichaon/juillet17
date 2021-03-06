/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:26:35 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/10 19:22:20 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_putstring(char c, char d, char u)
{
	if ((c != d && d != u && c != u))
	{
		if ((c == 7 && d == 8 && u == 9))
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
				ft_putstring(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
