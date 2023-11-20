/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:26:26 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/19 01:04:21 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *a;
    
    i = 0;
    a = (unsigned char *)s;
    while (i < n)
    {
        a[i] = 0;
        i++;
    }
}
