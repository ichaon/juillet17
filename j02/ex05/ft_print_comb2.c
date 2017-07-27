/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:05:23 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/09 17:32:56 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstring(int a, int b)
{
	if (a == 98 && b == 99)
	{
		ft_putchar((a / 10 + '0'));
		ft_putchar((a % 10 + '0'));
		ft_putchar(' ');
		ft_putchar((b / 10 + '0'));
		ft_putchar((b % 10 + '0'));
	}
	else
	{
		ft_putchar((a / 10 + '0'));
		ft_putchar((a % 10 + '0'));
		ft_putchar(' ');
		ft_putchar((b / 10 + '0'));
		ft_putchar((b % 10 + '0'));
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 99 && b <= 99)
	{
		if (a < b)
		{
			ft_putstring(a, b);
			b++;
		}
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
