/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:30 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:31 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
 char *ft_strrchr(const char *s, int c)
 {
    int slen = ft_strlen(s);

    while(slen)
    {
        if(s[slen] == c)
        {
            return ((char *)s+ slen);
        }
        slen--;
    }
    if(s[slen] == c)
        return ((char *)s + slen);
    
    return 0;
 }