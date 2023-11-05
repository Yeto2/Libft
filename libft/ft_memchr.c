/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:02 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:03 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
size_t i;
i = 0;
char *str = (char *)s;

while (str[i] && i < n-1)
{
    if (str[i] == c)
        return(str + i);
    i++;
}
if(str[i] == c)
    return (str + i);
return (0);
}
