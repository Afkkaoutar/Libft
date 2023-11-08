/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:01:33 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/05 16:01:50 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    char *p;
    int i;
    int j;

    i = 0;
    j = 0;
    while(s[i] != '\0' && s[i] != c)
        i++;
    if ( i == strlen(s))
        return(NULL);
    p = malloc(sizeof(char) * strlen(s) - i + 1);
    if (p == NULL)
        return NULL;
    while (s[i] != '\0')
    {
        p[j] = s[i];
        i++;
        j++;
    }
    return (p);
}
int main()
{
    char *c = "kawtar";
    int n = 'p';
    printf("%s\n", ft_strchr(c, n));
}
