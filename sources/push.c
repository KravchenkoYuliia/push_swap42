/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:52:56 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/27 14:02:27 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **dest, t_list **src)
{
	t_list	*first;
	t_list	*second;

	first = *src;
	second = (*src)->next;
	ft_lstadd_front(dest, first);
	*src = second;
}

void	ft_push_a(t_list **a, t_list **b)
{
	if (!*b | !b)
		ft_exit("You can't push from b to a, b does not exist", a, NULL);
	ft_printf("pa\n");
	ft_push(a, b);
}

void	ft_push_b(t_list **a, t_list **b)
{
	if (!*a | !a)
		ft_exit("You can't push from a to b, a does not exist", NULL, b);
	ft_printf("pb\n");
	ft_push(b, a);
}
