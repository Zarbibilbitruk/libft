/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:20:15 by tautin--          #+#    #+#             */
/*   Updated: 2024/06/03 17:28:49 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	int		i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c || s[i])
			nbr++;
		i++;
	}
	return (nbr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	string_len;
}