/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 21:04:34 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/26 13:51:44 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(x) x % 2 == 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments"
# define ODD_MSG "I have an odd number of arguments"
# define SUCCESS 0

typedef int		t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
