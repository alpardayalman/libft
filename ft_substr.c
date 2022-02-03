/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:56 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/03 03:57:01 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *source, unsigned int start, size_t len)
{
	size_t	index;
	size_t	j;
	char	*ptr;

	ptr = NULL;
	if (source)
	{
		if (start >= ft_strlen(source))
			start = ft_strlen(source) % start;
		index = 0;
		while (index < len && source[(size_t)start + index] != '\0')
			index++;
		j = 0;
		ptr = malloc(sizeof(char) * index + 1);
		if (!ptr)
			return (NULL);
		while (j < index)
		{
			ptr[j] = source[(size_t)start + j];
			j++;
		}
		ptr[index] = '\0';
		return (ptr);
	}
	return (NULL);
}
