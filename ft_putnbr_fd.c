/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:47:55 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/11/18 20:07:03 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
// void	ft_putnbr_fd(int nb, int fd)
// {
// 	if (nb == -2147483648)
// 	{
// 		ft_putchar_fd('-', fd);
// 		ft_putchar_fd('2', fd);
// 		nb = 147483648;
// 	}
// 	if (nb < 0)
// 	{
// 		nb = nb * (-1);
// 		ft_putchar_fd('-', fd);
// 	}
// 	if (nb <= 9)
// 	{
// 		ft_putchar_fd(nb + 48, fd);
// 	}
// 	else
// 	{
// 		ft_putnbr_fd(nb / 10, fd);
// 		ft_putchar_fd((nb % 10) + '0', fd);
// 	}
// }