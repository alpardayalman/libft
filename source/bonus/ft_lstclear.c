/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:24:59 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/04 21:38:15 by ayalman          ###   ########.Tr       */
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
		(*del)(decoy->content);
		t = decoy->next;
		free(decoy);
		decoy = t;
	}
	*lst = NULL;
}
