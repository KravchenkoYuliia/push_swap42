/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:35:18 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:06:52 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_swap(t_list **list)
{
	t_list	*first;
	t_list	*second;

	first = *list;
	second = (*list)->next;
	first->next = second->next;
	ft_lstadd_front(list, second);
}

void	ft_swap_a(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		return ;
	ft_printf("sa\n");
	ft_swap(list);
}

void	ft_swap_b(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		return ;
	ft_printf("sb\n");
	ft_swap(list);
}

void	ft_swap_ab(t_list **lst1, t_list **lst2)
{
	if (ft_lstsize(*lst1) < 2 || ft_lstsize(*lst2) < 2)
		return ;
	ft_printf("ss\n");
	ft_swap(lst1);
	ft_swap(lst2);
}
