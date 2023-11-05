/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:21 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:22 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char * restrict dst,const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t srclen;
    
    srclen = 0;
    i = 0;

    while (src[srclen])
    {
        srclen++;
    }
    
    while(i < srclen && i < dstsize -1)
    {
        dst[i] = src[i];
        i++;
    }
    if(dstsize > 0)
    {
        dst[srclen] = '\0';
    }
    return(srclen);
}