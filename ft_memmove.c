/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:40:00 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/22 17:34:04 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	int		ft_n;
	char	*ft_dest;
	char	*ft_src;

	ft_n = (int)n;
	ft_dest = (char *)dest;
	ft_src = (char *)src;
	if (ft_dest == NULL && ft_src == NULL)
		return (0);
	if (ft_src < ft_dest)
	{
		while (ft_n >= 0)
		{
			ft_dest[ft_n] = ft_src[ft_n];
			ft_n--;
		}
	}
	else
		ft_memcpy(ft_dest, ft_src, n);
	return (dest);
}
