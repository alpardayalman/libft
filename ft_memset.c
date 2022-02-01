/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:12 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/01 16:08:47 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;
	size_t	index;

	if (!str)
		return (NULL);
	ptr = (char *)str;
	index = 0;
	while (index < n)
	{
		ptr[index] = c;
		index++;
	}
	return (ptr);
}
