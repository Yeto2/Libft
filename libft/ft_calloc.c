/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:07:51 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:11:42 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    ptr = malloc(count * size);
    if (!ptr)
    {
        return 0;
    }
    ft_bzero(ptr,count * size);
    return(ptr);
}