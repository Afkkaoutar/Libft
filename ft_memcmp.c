/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:36:20 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/03 05:59:45 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dst, const void *src, int c, size_t n)
{
    int i = 0;
    unsigned char *s1 = (unsigned char *)src;
    unsigned char *s2 = (unsigned char *)dst;
    while(i < n)
    {
        if(s1[i] != s2[i])
            return(s1[i] -  s2[i]);
        i++;
    }
    return 0;
}
