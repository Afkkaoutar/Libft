/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:50:58 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/23 11:37:10 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int i;

    i = 0;
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

int main ()
{
	char src[] = "hello";
	char dst[] = "world";
	printf("%d\n",ft_strlcpy(dst,src,3));
	printf("%s\n",dst);
	return 0;
}
