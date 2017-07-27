/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:04:27 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/27 18:01:25 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		val;
	int		*tab;

	i = 0;
	val = max - min;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * val);
	if (tab == NULL)
		return (0);
	while (i < val)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
