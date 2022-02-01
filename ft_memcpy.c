/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:06:16 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/01 16:26:56 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char			*dest;
	const char		*src;

	if (destination == source || n == 0)
		return (destination);
	if (!destination || !source)
		return (0);
	dest = (char *) destination;
	src = (const char *) source;
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (dest);
}
