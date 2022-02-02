/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:24:59 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 16:56:22 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*decoy;
	t_list	*t;

	decoy = *lst;
	while (decoy)
	{
		t = decoy;
		ft_lstdelone(t, del);
		decoy = decoy->next;
	}
	*lst = decoy;
}
