/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:52 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 23:04:10 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

_Bool	ft_isalpha(int a);
_Bool	ft_isalnum(int a);
_Bool	ft_isascii(int a);
_Bool	ft_isdigit(int a);
_Bool	ft_isprint(int a);

int		ft_toupper(int a);
int		ft_tolower(int a);
int		ft_atoi(const char *s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	ft_bzero(void *source, size_t n);
void	*ft_calloc(size_t amount, size_t n);
void	*ft_memchr(const void *a, int b, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);

#endif
