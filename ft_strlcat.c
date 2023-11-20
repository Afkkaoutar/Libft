/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:15:21 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/20 22:42:39 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i = 0;
    size_t SOURCE = ft_strlen(src);
    size_t DESTINATION = ft_strlen(dst);

    if (!dst && !dstsize)
        return (ft_strlen(src));
    if (dstsize <= DESTINATION)
        return (SOURCE + dstsize);
    i = 0;
    while (src[i] && DESTINATION + i < dstsize - 1)
    {
        dst[DESTINATION + i] = src[i];
        i++;
    }
    dst[DESTINATION + i] = '\0';
    return (SOURCE+ DESTINATION);
}
