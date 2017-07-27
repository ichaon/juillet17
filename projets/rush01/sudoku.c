/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorbrej <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 07:30:55 by jcorbrej          #+#    #+#             */
/*   Updated: 2017/07/16 22:25:23 by jcorbrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_carre1(int i);
void	ft_carre2(int i);
void	ft_carre3(int i);
void	ft_carre4(int i);
void	ft_carre5(int i);
void	ft_carre6(int i);
void	ft_carre7(int i);
void	ft_carre8(int i);
void	ft_carre9(int i);

int		ft_verticale(int i)
{
	int		tab[9][9];
	int		x;
	int		y;
	int		espace;

	espace = ' ';
	while (tab[y][x] != i)
	{
		if (x < 9)
			x++;
		if (x == 8)
		{
			write(1, &i, 1);		** si vertiale est ok alors on ecrit notre chiffres 
			write(1, &espace, 1);
		}
	}
}

int		ft_horizontale(int i)
{
	int		tab[9][9];
	int		x;
	int		y;

	while (tab[y][x] != i)
	{
		if (y < 9)
			y++;
		if (y == 8)
			ft_verticale(i);		** si verif horizontale est ok alors on passe a la verticale.
}

int		ft_carre(int y, int x, int i)			** determination de chaque carree pour pouvoir verifier si aucun nombre est identique dans un carree.
{
		if ((x >= 0 && x <= 2) && (y >= 0 && y <= 2))
		   ft_carre1(i);
		if ((x >= 3 && x <= 5) && (y >= 0 && y <= 2))
			ft_carre2(i);
		if ((x >= 6 && x <= 8) && (y >= 0 && y <= 2))
			ft_carre3(i);
		if ((x >= 0 && x <= 2) && (y >= 3 && y <= 5))
			ft_carre4(i);
		if ((x >= 3 && x <= 5) && (y >= 3 && y <= 5))
			ft_carre5(i);
		if ((x >= 6 && x <= 8) && (y >= 3 && y <= 5))
			ft_carre6(i);
		if ((x >= 0 && x <= 2) && (y >= 6 && y <= 8))
			ft_carre7(i);
		if ((x >= 3 && x <= 5) && (y >= 6 && y <= 8))
			ft_carre8(i);
		if ((x >= 6 && x <= 8) && (y >= 6 && y <= 8))
			ft_carre9(i);
}

int		ft_remplissage(void)		** permettre le remplissage des chiffres en vayant qu il n y a pas de meme chiffre sur le meme carree, la meme ligne et la meme colonne.
{
	int tab[y][x];	** tableau deux dimension de neuf par neuf.
	int x;
	int	y;
	int i;

	x = 0;
	y = 0;
	while (y < 9 && x < 9)
	{
		while (y < 9)
		{
			if (tab[y][x] < '.')
			{
				ft_carre(y, x);
				i++;
				y++;
			}
			else
				y++;
		}
		x++;
	}
}
