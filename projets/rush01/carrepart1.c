/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carrepart1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorbrej <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:00:28 by jcorbrej          #+#    #+#             */
/*   Updated: 2017/07/16 22:15:13 by jcorbrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_carre1(int i)		 ** Teste de chaque carre du sudoku. carre1 = haut gauche
{
	int	tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 2 && x >= 0) && (y <= 2 && y >= 0))
		{
			if (x < 3)
				x++;
		}
		y++;
	}
	if (x == 2 && y == 2)
		ft_horizontale(i);		** si la condition est respecter alors on passe a la verif horizontale
}

void	ft_carre2(int i)		** carre2 = haut milieu
{
	int tab[9][9];
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 5 && x >= 3) && (y <= 2 && y >= 0))
		{
			if (x < 6)
				x++;
		}
		y++;
	}
	if (x == 5 && y == 2)
		ft_horizontale(i);
}

void	ft_carre3(int i)		** carre3 = haut droite
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 8 && x >= 6) && (y <= 2 && y >= 0))
		{
			if (x < 9)
				x++;
		}
		y++;
	}
	if (x == 8 && y == 2)
		ft_horizontale(i);
}

void	ft_carre4(int i)		** carre4 = milieu gauche
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 2 && x >= 0) && (y <= 5 && y >= 3))
		{
			if (x < 3)
				x++;
		}
		y++;
	}
	if (x == 2 && y == 5)
		ft_horizontale(i);
}

void	ft_carre5(int i)		** carre5 = milieu milieu
{
	int tab[9][9];
	int y;
	int x;

	x = 0;
	y = 0;
	while (tab[9][9] != i)
	{
		while ((x <= 5 && x >= 3) && (y <= 5 && y >= 3))
		{
			if (x < 6)
				x++;
		}
		y++;
	}
	if (x == 5 && y == 5)
		ft_horizontale(i);
}
