/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:56 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 23:06:12 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *source, int m, int n)
{
    size_t a;
    size_t index;
    char *ptr;

    a = n - m;
    ptr = malloc (a * sizeof(char));
    if (!ptr)
        return (NULL);
    index = 0;
    while (m < n)
    {
        ptr[index] = source[m];
        index++;
        m++;
    }
    ptr[index] = '\0';
    return (ptr);
}
