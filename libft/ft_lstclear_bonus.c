/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:04:40 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/13 22:04:44 by yessemna         ###   ########.fr       */
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
