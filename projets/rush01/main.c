/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 17:04:22 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/16 22:25:06 by jcorbrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_remplissage(void);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)  
{
	while (x <= 8)
	{
		if (ligne(x, y, av) == 0)
			av[y][x]++;
		x++;
	}
	x = 0;
	y = 1;
	while (y <= 9)
	{
		x = 0;
		while (x <= 8)
		{
			ft_putchar(av[y][x]);
			if (x < 8)
				ft_putchar(' ');
			else if (x == 8)
				ft_putchar('\n');
			x++;
		}
		y++;
	}
	return (0);
	ft_remplissage(void);
}

