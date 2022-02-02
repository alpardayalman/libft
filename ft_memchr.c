/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:55:38 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 20:16:08 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *a, int b, size_t n)
{
	const char		*str;
	size_t			index;

	if (b > 256)
		b -= 256;
	str = (const char *) a;
	index = 0;
	while (index < n)
	{
		if (str[index] == b)
			return ((void *)(a + index));
		index++;
	}
	return (0);
}
