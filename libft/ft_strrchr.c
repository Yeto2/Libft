/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:30 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/08 00:04:11 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cr;
	int		slen;

	cr = (char)c;
	slen = ft_strlen(s);
	while (slen)
	{
		if (s[slen] == cr)
		{
			return ((char *)s + slen);
		}
		slen--;
	}
	if (s[slen] == cr)
		return ((char *)s + slen);
	return (0);
}
