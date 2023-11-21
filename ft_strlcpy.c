/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:50:58 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/21 20:49:26 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int i = 0;

    if (!dst || !src)
        return (0);
    while (size > 1 && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
            size--;
        }
        if (size > 0)
        {
            
        dst[i] = '\0'; 
    }
    while (src[i] != '\0')
        i++;

    return i;
}
