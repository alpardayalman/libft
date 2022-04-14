/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:50:31 by ardayalman        #+#    #+#             */
/*   Updated: 2022/04/14 14:53:35 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counthex(long int decnumber)
{
	long int	quotient;
	int			i;

	i = 0;
	if (decnumber == 0)
		return (1);
	if (decnumber < 0)
		quotient = UINT_MAX - decnumber + 1;
	else
		quotient = decnumber;
	while (quotient != 0)
	{
		quotient /= 16;
		i++;
	}
	if (decnumber < 0)
		return (i - 1);
	return (i);
}

int	ft_count_phex(long long int decnumber)
{
	unsigned long long int	quotient;
	int						i;

	i = 0;
	if (decnumber == 0)
		return (1);
	if (decnumber < 0)
		quotient = ULONG_MAX + decnumber + 1;
	else
		quotient = decnumber;
	while (quotient != 0)
	{
		quotient /= 16;
		i++;
	}
	if (decnumber < 0)
		return (i);
	return (i);
}

int	ft_countdec(long long p)
{
	long long	nbr;
	int			i;

	nbr = p;
	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}
