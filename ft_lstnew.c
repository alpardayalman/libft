/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:25:10 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/02 17:01:42 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*decoy;

	decoy = (t_list *)malloc(sizeof(t_list));
	if (!decoy)
		return (NULL);
	decoy->content = content;
	decoy->next = NULL;
	return (decoy);
}
