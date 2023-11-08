/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:23:30 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/07 23:36:28 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd > 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else if (n < 0)
		{
			ft_putchar('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else if (n >= 0 && n <= 9)
		{
			ft_putchar(n + '0', fd);
		}
	}
}
