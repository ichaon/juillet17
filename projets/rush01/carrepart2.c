/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carrepart2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorbrej <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:01:29 by jcorbrej          #+#    #+#             */
/*   Updated: 2017/07/16 22:12:39 by jcorbrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_carre6(int i)		** carre6 = milieu droite
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 8 && x >= 6) && (y <= 5 && y >= 3))
		{
			if (x < 9)
				x++;
		}
		y++;
	}
	if (x == 8 && y == 5)
		ft_horizontale(i);
}

void	ft_carre7(int i)		** carre7 = bas gauche
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 2 && x >= 0) && (y <= 8 && y >= 6))
		{
			if (x < 3)
				x++;
		}
		y++;
	}
	if (x == 2 && y == 8)
		ft_horizontale(i);
}

void	ft_carre8(int i)		** carre8 = bas milieu
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 5 && x >= 3) && (y <= 8 && y >= 6))
		{
			if (x < 6)
				x++;
		}
		y++;
	}
	if (x == 5 && y == 8)
		ft_horizontale(i);
}

void	ft_carre9(int i)		** carre9 = bas droite
{
	int	tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 8 && x >= 6) && (y <= 8 && y >= 6))
		{
			if (x < 9)
				x++;
		}
		y++;
	}
	if (x == 8 && y == 8)
		ft_horizontale(i);
}
