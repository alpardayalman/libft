/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:37:54 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 22:13:18 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char *s)
{
    int index;
    int trim_start;
    int trim_end;
    char *ptr;

    index = 0;
    trim_start = 0;
    trim_end = ft_strlen(s);

    while (s[trim_start] == ' ')
        trim_start++;
    while (s[trim_end] == ' ')
        trim_end--;
    ptr = malloc ((trim_end - strim_start) * sizeof(char));
    if (!ptr)
        return (NULL);
    while (trim_start <= trim_end)
    {
        ptr[index] = s[trim_start];
        index++;
        trim_start++; 
    }
    ptr[index] = '\0';
    return (ptr);
}