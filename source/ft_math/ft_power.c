/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:33:13 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/09 19:54:35 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	int	i;
	int	b;

	b = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb *= ft_power(nb, (power - 1));
	return (nb);
}
