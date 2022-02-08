/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:46 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 21:03:49 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s_1, const char *s_2, size_t n)
{
	size_t	index;

	if (!s_1 && !s_2)
		return (0);
	index = 0;
	if (n == 0)
		return (0);
	while ((s_1[index] && s_2[index]) != '\0'
		&& index < n - 1 && s_1[index] == s_2[index])
		index++;
	return ((unsigned char)s_1[index] - (unsigned char)s_2[index]);
}
