/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:48:58 by ayalman           #+#    #+#             */
/*   Updated: 2022/04/14 01:06:16 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	return (a);
}

void	ft_toupper_string(char *string)
{
	int	i;

	i = 0;
	if (!string)
		return ;
	while (string[i])
	{
		ft_toupper(string[i]);
		i++;
	}
}
