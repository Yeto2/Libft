/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:02 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/06 18:51:59 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
size_t i;
i = 0;
unsigned char cr = (unsigned char)c;
unsigned char *str = (unsigned char *)s;

while (i < n)
{
    if (str[i] == cr)
        return (str + i);
    i++;
}
return (0);

}
