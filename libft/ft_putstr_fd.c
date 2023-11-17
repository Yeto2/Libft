/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:02:50 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/17 16:58:05 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (fd >= 0)
	{
		while (s[i])
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
}
#include <fcntl.h>

int main()
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	ft_putstr_fd("Hello World!", fd);
	return (0);
}