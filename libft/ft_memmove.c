/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:10 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:11 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *strdst = (char *)dst;
    char *strsrc = (char *)src;
    size_t i = 0;
    if (strdst > strsrc)
    {
        while (len--)
        {
            strdst[len] = strsrc[len];
            i++;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            strdst[i] = strsrc[i];
            i++;
        }
    }
    return (strdst);
}
