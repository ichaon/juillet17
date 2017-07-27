/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 22:32:24 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/26 22:34:49 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = '0';
	while (i <= '9')
		ft_putchar(i++);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
