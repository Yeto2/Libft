/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:14 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/06 16:08:14 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    unsigned char cr = (unsigned char)c;
    char *str = (char *)s;
    int i = 0;
    while(str[i])
    {
        if(str[i] == cr)
            return (str + i);
        i++;
    }
    if(str[i] == cr)
        return (str + i);
    return (0);
}