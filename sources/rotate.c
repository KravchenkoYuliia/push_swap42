/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:07:48 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 16:35:26 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **list)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = *list;
	second = first->next;
	last = ft_lstlast(*list);
	*list = second;
	last->next = first;
	first->next = NULL;
}

void	ft_rotate_a(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		return ;
	ft_printf("ra\n");
	ft_rotate(list);
}

void	ft_rotate_b(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		return ;
	ft_printf("rb\n");
	ft_rotate(list);
}

void	ft_rotate_ab(t_list **lst1, t_list **lst2)
{
	if (ft_lstsize(*lst1) < 2 || ft_lstsize(*lst2) < 2)
		return ;
	ft_printf("rr\n");
	ft_rotate(lst1);
	ft_rotate(lst2);
}
