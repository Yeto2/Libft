/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:12 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:13 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len)
 {
    unsigned int i;
    i = 0;

    char *str;
    str = (char *)b;


    while(i < len)
    {
      str[i] = c;
      i++;
    }

    return (str);
 }