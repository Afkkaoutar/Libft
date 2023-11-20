/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:25:13 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/19 22:44:04 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	void	*ak;

	ak = (void*)malloc(count * size);
	if (!ak)
		return (NULL);
	ft_bzero(ak, count * size);
	return (ak);
}
