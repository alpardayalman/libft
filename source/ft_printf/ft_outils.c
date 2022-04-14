/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:38:11 by ayalman           #+#    #+#             */
/*   Updated: 2022/04/14 14:53:39 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_formater(va_list *args, char c)
{
	if (c == 'c' || c == 'u' || c == 'i' || c == 'd')
		return (ft_int_format(args, c));
	else if (c == 'p' || c == 'x' || c == 'X')
		return (ft_hex_format(args, c));
	else if (c == 's')
		return (ft_string(args));
	else
		return (ft_putchar('\%'));
}

int	ft_int_format(va_list *args, char c)
{
	int				a;
	char			d;

	if (c == 'i' || c == 'd')
	{
		a = va_arg((*args), int);
		ft_putnbr(a);
		return (ft_countdec(a));
	}
	else if (c == 'u')
		return (ft_unsigned_format(args));
	else
	{
		d = va_arg((*args), int);
		return (ft_putchar(d));
	}
}

int	ft_hex_format(va_list *args, char c)
{
	int				a;
	long long int	b;

	if (c == 'x' || c == 'X')
	{
		a = va_arg((*args), int);
		if (c == 'x')
			ft_dec2hexlow(a);
		else
			ft_dec2hexhigh(a);
		return (ft_counthex(a));
	}
	else
	{
		b = va_arg((*args), long long int);
		ft_putstr("0x");
		ft_pointhex(b);
		return (ft_count_phex(b) + 2);
	}
}

int	ft_unsigned_format(va_list *args)
{
	unsigned int	b;

	b = va_arg((*args), unsigned int);
	ft_putnbru(b);
	if (b == 0)
		return (1);
	return (ft_countdec(b));
}
//int a = va_arg((*args), int);