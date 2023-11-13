/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:28 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/12 15:15:59 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (!haystack && len == 0)
		return (0);
	if (n[0] == 0)
		return (h);
	while (h[i])
	{
		j = 0;
		while (n[j] == h[i + j] && i + j < len)
		{
			j++;
			if (n[j] == 0)
				return (h + i);
		}
		i++;
	}
	return (0);
}
