/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:39:19 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:06:20 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2_elems(t_list **lst)
{
	if (val((*lst)->next) < val(*lst))
		ft_swap_a(lst);
}

void	ft_sort_3_elems(t_list **lst)
{
	long	first;
	long	second;
	long	third;

	first = val(*lst);
	second = val((*lst)->next);
	third = val((*lst)->next->next);
	if (first > second && first < third)
		ft_swap_a(lst);
	else if (third < first && third > second)
		ft_rotate_a(lst);
	else if (third < second && third > first)
	{
		ft_swap_a(lst);
		ft_rotate_a(lst);
	}
	else if (first < second && first > third)
		ft_rev_rotate_a(lst);
	else if (second < first && second > third)
	{
		ft_swap_a(lst);
		ft_rev_rotate_a(lst);
	}
}

void	ft_sort_4_elems(t_list **a, t_list **b)
{
	int	min;

	min = ft_find_min_int(*a);
	if (min == 0)
		ft_cut_ft_to_sort_4(a, b);
	else if (min == 1)
	{
		ft_swap_a(a);
		ft_cut_ft_to_sort_4(a, b);
	}
	else if (min == 2)
	{
		ft_rev_rotate_a(a);
		ft_rev_rotate_a(a);
		ft_cut_ft_to_sort_4(a, b);
	}
	else if (min == 3)
	{
		ft_rev_rotate_a(a);
		ft_cut_ft_to_sort_4(a, b);
	}
}

void	ft_sort_5_elems(t_list **a, t_list **b)
{
	int	min;

	min = ft_find_min_int(*a);
	if (min == 0)
		ft_need_to_cut_ft(a, b);
	else if (min == 1)
	{
		ft_swap_a(a);
		ft_need_to_cut_ft(a, b);
	}
	else if (min == 2)
	{
		ft_rev_rotate_a(a);
		ft_rev_rotate_a(a);
		ft_additional_to_sort_5(a, b);
	}
	else if (min == 3)
	{
		ft_rev_rotate_a(a);
		ft_additional_to_sort_5(a, b);
	}
	else if (min == 4)
		ft_additional_to_sort_5(a, b);
}
