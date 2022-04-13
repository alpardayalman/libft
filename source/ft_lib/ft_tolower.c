/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:45:32 by ayalman           #+#    #+#             */
/*   Updated: 2022/04/14 01:07:15 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		a += 32;
	return (a);
}

void	ft_tolower_string(char *string)
{
	int	i;

	i = 0;
	if (!string)
		return ;
	while (string[i])
	{
		ft_tolower(string[i]);
		i++;
	}
}
