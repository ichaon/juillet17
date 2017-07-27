/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:05:19 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/26 21:07:26 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_delim(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ft_nextw(char *str, int i)
{
	while (ft_delim(str[i]) && str[i] != '\0')
		i++;
	return (i);
}

int		ft_wnbr(char *str)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = (32 < str[i] && str[i] < 127) ? 1 : 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (32 < str[i + 1] && str[i + 1] < 127)
			{
				nbr++;
			}
		}
		i++;
	}
	return (nbr);
}

int		ft_strlen(char *str, int i)
{
	int		j;

	j = i;
	while (!ft_delim(str[j]) && str[j] != '\0')
		j++;
	return ((j - i) + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (0);
	if (!(tab = malloc(sizeof(char*) * (ft_wnbr(str) + 1))))
		return (0);
	while (j < ft_wnbr(str))
	{
		i = ft_nextw(str, i);
		if (!(tab[j] = malloc(sizeof(char) * (ft_strlen(str, i) + 1))))
			return (0);
		while (!ft_delim(str[i]) && str[i] != '\0')
			tab[j][k++] = str[i++];
		tab[j++][k] = '\0';
		k = 0;
	}
	tab[j] = 0;
	return (tab);
}
