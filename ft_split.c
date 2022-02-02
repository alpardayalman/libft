/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:24 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/03 02:23:16 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsep(char const *s, char c)
{
	size_t	i;
	size_t	nos;

	i = 0;
	nos = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nos++;
			while (s[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (nos);
}

static char	*ft_make_s(size_t start, size_t i, const char *s)
{
	char	*final;
	size_t	index;

	final = (char *) malloc(sizeof(char) * (i - start + 1));
	if (!final)
		return (NULL);
	index = 0;
	while (start < i)
		final[index++] = s[start++];
	final[index] = '\0';
	return (final);
}

static char	**ft_final(size_t nos, char const *s, char c, char **final)
{
	size_t	maker;
	size_t	i;
	size_t	start;

	maker = 0;
	i = 0;
	while (maker < nos)
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c)
				i++;
			final[maker] = ft_make_s(start, i, s);
			maker++;
		}
		i++;
	}
	final[maker] = NULL;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	nos;

	if (!s)
		return (NULL);
	nos = ft_getsep(s, c);
	final = (char **) malloc(sizeof(char *) * (nos + 1));
	if (!final)
		return (NULL);
	final = ft_final(nos, s, c, final);
	if (final)
		return (final);
	else
		return (NULL);
}
