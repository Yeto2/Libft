/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:40:56 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/09 20:43:54 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find(const char *s1, const char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*res;

	if (!s1)
	{
		return (0);
	}
	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1 || !set)
		return (0);
	while (ft_find(set, s1[start]) == 1)
		start++;
	while (ft_find(set, s1[end]) == 1)
		end--;
	res = ft_substr(s1, start, ((size_t)(end - start) + 1));
	return (res);
}
