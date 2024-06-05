/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:20:15 by tautin--          #+#    #+#             */
/*   Updated: 2024/06/05 15:16:20 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	int		i;
	size_t	nbr;

	if (!s)
		return (0);
	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nbr++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nbr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	string_len;
	int		j;

	tab = (char **)malloc((count_str(s, c) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				string_len = ft_strlen(s);
			else
				string_len = ft_strchr(s, c) - s;
			tab[j++] = ft_substr(s, 0, string_len);
			s += string_len;
		}
	}
	tab[j] = NULL;
	return (tab);
}
