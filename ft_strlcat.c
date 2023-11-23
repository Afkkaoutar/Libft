/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:15:21 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/22 17:35:26 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	src_ln;
	size_t	dest_ln;

	i = 0;
	src_ln = ft_strlen(src);
	dest_ln = ft_strlen(dst);
	if (!dst && !dstsize)
		return (ft_strlen(src));
	if (dstsize <= dest_ln)
		return (src_ln + dstsize);
	while (src[i] && dest_ln + i < dstsize - 1)
	{
		dst[dest_ln + i] = src[i];
		i++;
	}
	dst[dest_ln + i] = '\0';
	return (src_ln + dest_ln);
}
