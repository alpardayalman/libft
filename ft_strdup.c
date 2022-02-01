/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:29 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 21:49:27 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *ptr;
    size_t  index;

    if (!str)
        return (NULL);
    ptr = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
    if (!ptr)
        return (NULL);
    index = 0;
    while (str[index])
    {
        ptr[index] = str[index];
        index++;
    }
    ptr[index] = '\0';
    return (ptr);
}