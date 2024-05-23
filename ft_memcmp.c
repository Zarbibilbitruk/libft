/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:13:56 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/23 17:25:10 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				ft_n;
	unsigned char	*ft_s1;
	unsigned char	*ft_s2;

	i = 0;
	ft_n = (int)n;
	ft_s1 = (unsigned char *)s1;
	ft_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((ft_s1[i] || ft_s2[i]) && i < ft_n)
	{
		if (ft_s1[i] != ft_s2[i])
			return (ft_s1[i] - ft_s2[i]);
		i++;
	}
	if (i != ft_n)
		return (*ft_s1 - *ft_s2);
	return (*ft_s1 - *ft_s2);
}
