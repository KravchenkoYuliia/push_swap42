/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_to_small_sort.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:00:38 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:08:15 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_cut_ft_to_sort_4(t_list **a, t_list **b)
{
	ft_push_b(a, b);
	ft_sort_3_elems(a);
	ft_push_a(a, b);
}

void	ft_additional_to_sort_5(t_list **a, t_list **b)
{
	ft_rev_rotate_a(a);
	ft_push_b(a, b);
	ft_sort_4_elems(a, b);
	ft_push_a(a, b);
}

void	ft_need_to_cut_ft(t_list **a, t_list **b)
{
	ft_push_b(a, b);
	ft_sort_4_elems(a, b);
	ft_push_a(a, b);
}
