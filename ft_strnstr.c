/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:48 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 21:17:02 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigy, const char *mini, size_t n)
{
	size_t	i;
	size_t	j;
	
	if (!bigy && !mini)
		return (NULL);
	if (mini == bigy || !n)
		return ((char *)bigy);
	i = 0;
	while (bigy[i] && i + 1 < n)
	{
		j = 0;
		while (bigy[i + j] && mini[j] && bigy[i + j] == mini[j] && i + j < n)
			j++;
		if (!mini[j])
			return ((char *)(bigy + i));
		i++;
	}
	return (NULL);
}
