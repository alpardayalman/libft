/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:56 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 01:02:40 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *source, unsigned int start, size_t len)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < len && source[(size_t)start + index] != '\0')
	{
		ptr[index] = source[(size_t)start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
