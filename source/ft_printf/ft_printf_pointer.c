/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:54:32 by ardayalman        #+#    #+#             */
/*   Updated: 2022/04/14 14:53:53 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printhex(unsigned long int quotient)
{
	char	temp;

	if (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
			temp += '0';
		else
			temp += 87;
		ft_printhex(quotient / 16);
		ft_putchar(temp);
	}
}

void	ft_pointhex(long long int decimalNumber)
{
	unsigned long long int	quotient;

	if (decimalNumber == 0)
		ft_putchar('0');
	if (decimalNumber < 0)
		quotient = ULONG_MAX + decimalNumber + 1;
	else
		quotient = decimalNumber;
	ft_printhex(quotient);
}
