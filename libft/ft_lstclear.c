/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:48:10 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/12 01:57:01 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nxt_node;

	current = *lst;
	while (current)
	{
		nxt_node = current ->next;
		ft_lstdelone(current, del);
		current = nxt_node;
	}
	*lst = NULL;
}
