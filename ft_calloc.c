/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:25:13 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/12 08:01:22 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ak;

	ak = (void *) malloc(count * size);
	if (!ak)
		return (NULL);
	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	ft_bzero(ak, count * size);
	return (ak);
}
