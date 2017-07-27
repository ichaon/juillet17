/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:31:14 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/20 22:17:18 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	else
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
