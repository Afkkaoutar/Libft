/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:50 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/19 22:39:33 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    char	*str; 
    int i = 0; 

    if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1)))) 
        return (NULL);
    while (s[i]) 
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0'; 
    return (str);
}