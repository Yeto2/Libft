/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:47:15 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/06 16:53:32 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t s1len;
    size_t s2len;
    char *res;
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);

    res = malloc(sizeof(char) * (s1len+s2len) + 1);
    if(!res)
    {
        return (0);
    }

    i = 0;
    while (s1[i] && i <= s1len)
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
         res[i] = s2[j];
            i++;
            j++;
    }
    res[i] = '\0';
    return (res);
}