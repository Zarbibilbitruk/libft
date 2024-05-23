/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:12:22 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/23 11:42:23 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_address;

	i = 0;
	last_address = NULL;
	while (s[i])
	{
		if (s[i] == c)
			last_address = &s[i];
		i++;
	}
	return (last_address);
}
