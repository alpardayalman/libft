/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:51:42 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 15:17:07 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

_Bool	ft_isascii(int a)
{
	return (a >= 0 && a < 127);
}
