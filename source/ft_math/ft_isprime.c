/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:33:30 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/09 19:33:32 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isprime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (false);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (false);
		i++;
	}
	return (true);
}
