/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:30:58 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/14 06:23:49 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	unsigned char *a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (!a && !b)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}