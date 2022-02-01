/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:51 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/01 17:30:52 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*ptr;

	if (!s)
		return (NULL);
	index = -1;
	ptr = 0;
	while (s[++index])
	{
		if (s[index] == c)
			ptr = (char *)(s + index);
	}
	if (s[index] == c)
		ptr = (char *)(s + index);
	return (ptr);
}
