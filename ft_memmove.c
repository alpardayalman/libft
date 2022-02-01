/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:09:42 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 23:38:56 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char *dest;
	char *src;
	size_t i;

	i = 0;
	dest = (char *)destination;
	src = (char *)source;
	if (src<dest)
		while ((int)(--n) >= 0)
			*(dest + n) = *(src + n);
	else
		while (i++ < n)
			*(dest + i) = *(src + i);
	return (dest);
}
