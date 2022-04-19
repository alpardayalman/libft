/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:12:48 by ardayalman        #+#    #+#             */
/*   Updated: 2022/04/19 14:51:15 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_color_fd(char *color, char *s, int fd)
{
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(ANSI_RESET, fd);
}
