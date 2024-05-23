/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:03:32 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/23 17:29:09 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	int				ft_n;
	unsigned char	*ft_s;

	i = 0;
	ft_n = (int)n;
	ft_s = (unsigned char *)s;
	while (i < ft_n)
	{
		if (ft_s[i] == c)
			return (&ft_s[i]);
		i++;
	}
	return (NULL);
}
