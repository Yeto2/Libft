/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:07 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:08 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *strdst = (char *) dst;
    char *strsrc = (char *) src;
    size_t i;
    i = 0;
    while(i < n)
    {
        strdst[i] = strsrc[i];
        i++;
    }
    return (strdst);
}
