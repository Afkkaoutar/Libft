/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:01:33 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/16 14:03:15 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

  char *ft_strchr(const char *s, int c)
  {
     int i = 0;

     while (s[i])
    {
         if (s[i] == c)
            return ((char *)s + i);
         i++;
      }
     return (NULL);
  }
int main() 
{
    char s[] = "kaoutar";
    printf("%s\n", ft_strchr(s, 'a'));
}
