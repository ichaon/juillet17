/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 22:26:21 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/26 22:31:37 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		i;

	i = 'z';
	while (i >= 'a')
		ft_putchar(i--);
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
