/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:32:40 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/24 20:09:05 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;
	char	*ft_s;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	i = 0;
	ft_s = (char *)s;
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == 0)
		return (NULL);
	while (i < len)
	{
		tab[i] = ft_s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
