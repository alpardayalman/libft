/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:51:42 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 19:38:23 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}
