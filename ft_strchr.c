/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:54:42 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/23 16:38:57 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ft_s;

	i = 1;
	ft_s = (char *)s;
	while (ft_s[i - 1])
	{
		if (ft_s[i] == c)
			return (&ft_s[i]);
		i++;
	}
	return (NULL);
}
