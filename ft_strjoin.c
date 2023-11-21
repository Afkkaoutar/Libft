/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:51:20 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/21 00:52:33 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    
        char	*str;
        int		i = 0;
        int		j = 0;
    
        if (!s1 || !s2)
            return (NULL);
        str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!str)
            return (NULL);
        if (s1)
        {
            while (s1[i])
            {
                str[i] = s1[i];
                i++;
            }
        }
        if (s2)
        {
            while (s2[j])
            {
                str[i] = s2[j];
                i++;
                j++;
            }
        }
        str[i] = '\0';
        return (str);
}
