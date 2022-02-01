/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:51 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 21:49:45 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int index;

    index = (int)ft_strlen(s) + 1;
    while (index < 0)
    {
        if (*(s + index) == (char)c)
            return ((char *)s + index);
        index++;
    }
    return (NULL);
}