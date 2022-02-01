/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:12 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 23:42:25 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *str, int c, size_t n)
{
    char *ptr;
    size_t i;

    if (!str)
        return (NULL);
    ptr = (char *)str;
    i = 0;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (ptr);
}