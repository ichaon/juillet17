/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:19:18 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/27 17:56:33 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
