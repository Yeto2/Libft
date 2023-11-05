/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:05 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:06 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    unsigned  char *str1; 
    unsigned  char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    if (n == 0 || (str1[i]==0 && str2[i]==0))
        return 0;
    
    while (--n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);    
}