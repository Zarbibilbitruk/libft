/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:40:22 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/22 15:48:50 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ft_dest;
	char			*ft_src;

	i = 0;
	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		i++;
	}
	return (dest);
}
