/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:20:01 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/20 13:15:13 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>


int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int	    ft_tolower(int c);
int	    ft_toupper(int c);
size_t ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int	    ft_toupper(int c);
char    *ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int      ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void   ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
// char *ft_strtrim(char const *s1, char const *set);


#endif