/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:06:17 by ardayalman        #+#    #+#             */
/*   Updated: 2022/04/14 14:53:58 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_string(va_list *args)
{
	char	*s;
	int		b;

	s = va_arg((*args), char *);
	b = -1;
	if (s)
	{
		return (ft_putstr(s));
	}
	else
	{
		ft_putstr("(null)");
		b = 6;
		return (b);
	}
	return (b - 1);
}
