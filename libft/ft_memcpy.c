/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:07 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/07 22:46:32 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*strdst;
	char	*strsrc;
	size_t	i;

	strdst = (char *) dst;
	strsrc = (char *) src;
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
