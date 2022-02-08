/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:36:28 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/01 14:47:26 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *source, size_t n)
{
	char	*ptr;
	size_t	index;

	if (n == 0)
		return ;
	ptr = source;
	index = 0;
	while (index < n)
		*(ptr + index++) = 0;
}
