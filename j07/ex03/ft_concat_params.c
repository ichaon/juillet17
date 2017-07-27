/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:44:15 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/27 19:04:40 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_totlen(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		j += ft_strlen(argv[i]);
		i++;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	k = 0;
	str = (char*)malloc(sizeof(*str) * (ft_totlen(argc, argv) + argc));
	if (str == NULL)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		str[k++] = '\n';
		i++;
	}
	str[--k] = '\0';
	return (str);
}
