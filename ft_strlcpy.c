/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:46 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/27 15:38:49 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	int	i;
	int	ft_siz;

	if (siz < 0)
		return (0);
	i = 0;
	ft_siz = (int)siz;
	if (ft_siz == 0)
		return (ft_strlen(src));
	while (src[i] && i < ft_siz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
