/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:06:42 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/30 18:10:25 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_nbr(int n)
{
	int	i;

	if (n == -2147483648)
		return (11);
	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// fonction check negatif ou pas

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = len_nbr(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = n * -1;
	}
	while (i < len)
	{
		str[i] = (n / (10 ^ ((len - 1) - i))) + 48; //1 seul chiffre  la fois et moi je fais tout cpmme un con
		i++;
	}
	str[len] = '\0';
	return (str);
}
