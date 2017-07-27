/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:45:35 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/13 10:40:36 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	int		res;

	i = 2;
	res = 1;
	if (nb <= 1)
		res = 0;
	while (i < nb && res != 0)
	{
		if ((nb % i) == 0)
			res = 0;
		i++;
	}
	return (res);
}

int		ft_find_next_prime(int nb)
{
	int		prime;

	prime = 0;
	while (ft_is_prime(nb) != 1)
	{
		nb++;
		ft_find_next_prime(nb);
	}
	prime = nb;
	return (prime);
}
