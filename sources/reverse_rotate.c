/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:54:15 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/27 16:28:58 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_before_last(t_list **list, t_list *last)
{
	t_list	*temp;

	temp = *list;
	while (temp != last)
	{
		if (temp->next == last)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	ft_rev_rotate(t_list **list)
{
	t_list	*first;
	t_list	*before_last;
	t_list	*last;

	last = ft_lstlast(*list);
	before_last = ft_get_before_last(list, last);
	first = *list;
	ft_lstadd_front(list, last);
	before_last->next = NULL;
}

void	ft_rev_rotate_a(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		ft_exit("Need at least 2 lists to rev rotate", list, NULL);
	ft_printf("rra\n");
	ft_rev_rotate(list);
}

void	ft_rev_rotate_b(t_list **list)
{
	if (ft_lstsize(*list) < 2)
		ft_exit("Need at least 2 lists to rev rotate", NULL, list);
	ft_printf("rrb\n");
	ft_rev_rotate(list);
}

void	ft_rev_rotate_ab(t_list **lst1, t_list **lst2)
{
	if (ft_lstsize(*lst1) < 2 | ft_lstsize(*lst2) < 2)
		ft_exit("Need at least 2 lists to rev rotate", lst1, lst2);
	ft_printf("rrr\n");
	ft_rev_rotate(lst1);
	ft_rev_rotate(lst2);
}
