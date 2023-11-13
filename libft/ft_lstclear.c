/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:48:10 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/12 16:45:49 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nxt_node;

	if (lst == NULL || *lst == NULL || !del)
		return ;
	current = *lst;
	while (current)
	{
		nxt_node = current ->next;
		ft_lstdelone(current, del);
		current = nxt_node;
	}
	*lst = NULL;
}
