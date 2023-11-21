/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:28:03 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/21 20:57:15 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;

    if (!needle) 
        return ((char *)haystack);
    if (ft_strlen(needle) > len)
        return (NULL);
    while (haystack[i] && len--)
    {
        if (ft_strncmp((char *)&haystack[i], (char *)needle, ft_strlen(needle)) == 0)
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}
