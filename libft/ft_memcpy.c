/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:07 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/12 16:45:24 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;
	size_t			i;

	strdst = (unsigned char *) dst;
	strsrc = (unsigned char *) src;
	i = 0;
	if (!strdst && !strsrc)
	{
		return (0);
	}
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (strdst);
}
