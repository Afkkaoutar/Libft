/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:20:01 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/14 05:53:12 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <xlocale.h>

int		ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int	    ft_tolower(int c);
int	    ft_toupper(int c);
size_t ft_strlen(char  *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int	    ft_toupper(int c);emcmp(void *dst, const void *src, int c, size_t n);
char    *ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int      ft_memcmp(const void *s1, const void *s2, size_t n);




#endif