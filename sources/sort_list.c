/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:36:01 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 16:38:50 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index(t_list *start_node, t_list *node)
{
	int	i;

	i = 0;
	while (start_node)
	{
		if (val(node) > val(start_node))
			i++;
		start_node = start_node->next;
	}
	return (i);
}

void	ft_sort_list(t_list **a, t_list **b)
{
	int		i;
	t_list	*start_node;
	t_list	*index_list;
	t_list	*temp;

	index_list = NULL;
	start_node = *a;
	temp = *a;
	while (temp)
	{
		i = ft_get_index(start_node, temp);
		ft_put_to_index_list(&index_list, i);
		temp = temp->next;
	}
	ft_lstclear(a, &free);
	*a = index_list;
	ft_radix(a, b);
}

int	ft_bits_size(t_list *a)
{
	int	i;
	int	number;

	i = 0;
	number = ft_lstsize(a) - 1;
	while (number > 0)
	{
		number /= 2;
		i++;
	}
	return (i);
}

void	ft_radix(t_list **a, t_list **b)
{
	int	bit;
	int	max_bit;

	bit = 0;
	max_bit = ft_bits_size(*a);
	while (bit < max_bit)
	{	
		ft_choose_stack(a, b, bit);
		while (*b)
			ft_push_a(a, b);
		bit++;
	}
}

void	ft_choose_stack(t_list **a, t_list **b, int bit)
{
	int		i;
	int		initial_size;
	t_list	*temp;

	i = 0;
	initial_size = ft_lstsize(*a);
	temp = *a;
	while (i < initial_size)
	{
		if (1 & (ft_int_value(temp) >> bit))
		{
			ft_rotate_a(a);
			temp = *a;
		}
		else
		{
			ft_push_b(a, b);
				temp = *a;
		}
		i++;
	}
}
