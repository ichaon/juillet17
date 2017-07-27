/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:32:11 by ichaon            #+#    #+#             */
/*   Updated: 2017/07/18 14:29:22 by ichaon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	ft_strlowcase(str);
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (!(('0' <= str[i] && str[i] <= '9') ||
					('a' <= str[i] && str[i] <= 'z') ||
					('A' <= str[i] && str[i] <= 'Z')))
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
