/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:19:32 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:19:33 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    sign = 1;
    nbr = 0;
    if (!str)
        return (0);
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + str[i] - 48;
        i++;
    }
    return (nbr * sign);
}