/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 23:09:30 by ayalman           #+#    #+#             */
/*   Updated: 2022/08/23 12:14:35 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putchar(char a)
{
	return (write(1, &a, 1));
}

int	ft_format(va_list *args, char c)
{
	if (c == 'u')
		return (ft_unsigned(va_arg((*args), unsigned int)));
	else if (c == 'c')
		return (ft_putchar(va_arg((*args), int)));
	else if (c == 'i' || c == 'd')
		return (ft_int(va_arg((*args), int)));
	else if (c == 'x' || c == 'X')
		return (ft_hex(va_arg((*args), unsigned int), c));
	else if (c == 'p')
		return (ft_point(va_arg((*args), unsigned long), 1));
	else if (c == 's')
		return (ft_string(va_arg((*args), char *)));
	else
		return (ft_string("\%"));
}

static bool	ft_flag_catch(const char *str, int i)
{
	return (str[i] == '%' && (str[i + 1] == 'c' || str[i + 1] == 'd'
			|| str[i + 1] == 'i' || str[i + 1] == 'u'
			|| str[i + 1] == 'x' || str[i + 1] == 'X'
			|| str[i + 1] == 'p' || str[i + 1] == 's' || str[i + 1] == '%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		rtn;

	i = -1;
	rtn = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (ft_flag_catch(str, i))
			rtn += ft_format(&args, str[++i]);
		else
			rtn += write(1, &str[i], 1);
	}
	va_end(args);
	return (rtn);
}
