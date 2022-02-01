/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:24 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 01:03:28 by ayalman          ###   ########.Tr       */
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
		if (s[i] == c)
		{
			nos++;
			while (s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	return (nos);
}

static char	*ft_make_s(char const *s, int s_i, int e_i)
{
	char	*final;
	size_t	i;

	final = (char *) malloc(sizeof(char) * (e_i - s_i + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (s_i < e_i)
	{
		final[i] = s[s_i];
		s_i++;
		i++;
	}
	final[i] = '\0';
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	i;
	size_t	nos;
	size_t	maker;
	size_t	start;

	nos = ft_getsep(s, c) + 1;
	final = (char **) malloc(sizeof(char *) * (nos + 1));
	if (!final)
		return (NULL);
	maker = 0;
	i = 0;
	while (maker < nos)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start != i)
			final[maker] = ft_make_s(s, start, i);
		maker++;
	}
	final[maker] = NULL;
	return (final);
}
