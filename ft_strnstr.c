/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:28:03 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/30 22:02:37 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*o;
	char	*m;

	i = 0;
	o = (char *)haystack;
	m = (char *)needle;
	if (!*m)
		return (o);
	while (o[i] && i <= len)
	{
		j = 0;
		while (o[i + j] == m[j] && i + j < len && m[j])
			j++;
		if (m[j] == '\0')
			return (o + i);
		i++;
	}
	return (NULL);
}
