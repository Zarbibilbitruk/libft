/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tautin-- <tautin--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:32:40 by tautin--          #+#    #+#             */
/*   Updated: 2024/05/22 17:30:30 by tautin--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>

/**************************/
/* fonctions obligatoires */
/**************************/

int		ft_atoi(const char *nptr);
void	bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);
size_t	strlcpy(char* dst, const char* src, size_t siz);
size_t	ft_strlen(const char *s);

#endif