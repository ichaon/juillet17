/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:19:44 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/12 14:46:52 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		nb_orig;

	i = 1;
	nb_orig = nb;
	if (nb > 12)
		return (0);
	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i < nb_orig)
		{
			nb = nb * (nb_orig - i);
			i++;
		}
	}
	return (nb);
}
