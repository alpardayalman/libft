/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:43:44 by ayalman           #+#    #+#             */
/*   Updated: 2022/04/19 14:50:34 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}

bool	ft_str_isnum(char *string)
{
	int	i;

	i = 0;
	if (string[i] == '-')
		i++;
	while (string[i])
	{
		if (ft_isdigit(string[i]))
			return (false);
		i++;
	}
	return (true);
}
