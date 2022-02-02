/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:25:13 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 17:02:24 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*decoy;
	int		i;

	decoy = lst;
	i = 0;
	while (decoy)
	{
		i++;
		decoy = decoy->next;
	}
	return (i);
}
