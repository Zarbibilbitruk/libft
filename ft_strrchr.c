/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:12:22 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/23 14:48:38 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_address;
	char	*ft_s;

	i = 0;
	last_address = NULL;
	ft_s = (char *)s;
	while (ft_s[i])
	{
		if (ft_s[i] == c)
			last_address = &ft_s[i];
		i++;
	}
	return (last_address);
}
