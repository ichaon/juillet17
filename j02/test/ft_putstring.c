/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:35:02 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/08 15:52:43 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);
void	ft_print_comb(void);

void	ft_putstring(char c, char d, char u)
{
	if ((c != d && d != u))
	{
		if ((c == 55 && d == 56 && u == 57))
		{
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(u);
		}
		else
		{
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(u);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
