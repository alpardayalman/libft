/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:10:43 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 20:31:24 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool	ft_isalpha(int a)
{
	return ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}
