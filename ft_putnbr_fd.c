/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:47:24 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:58:27 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr_fd(147483648, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10,fd);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
