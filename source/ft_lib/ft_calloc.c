/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:36:38 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 21:21:40 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t n)
{
	void	*ptr;

	ptr = malloc (amount * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, amount * n);
	return (ptr);
}
