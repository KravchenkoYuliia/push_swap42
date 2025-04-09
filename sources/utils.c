/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:15:35 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:15:37 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min_int(t_list *lst)
{
	int		i;
	int		i_min;
	long	min;

	i = 0;
	min = val(lst);
	i_min = 0;
	while (lst)
	{
		if (min > val(lst))
		{
			min = val(lst);
			i_min = i;
		}
		i++;
		lst = lst->next;
	}
	return (i_min);
}

long	val(t_list *node)
{
	return (*(long *)node->content);
}

int	ft_int_value(t_list *node)
{
	return (*(int *)node->content);
}

long	*ft_malloc_number(long number)
{
	long	*nb;

	nb = (long *)malloc(sizeof(long));
	if (!nb)
		return (NULL);
	*nb = number;
	return (nb);
}

void	ft_put_to_index_list(t_list **index_list, int i)
{
	t_list	*new;
	int		*new_i;

	new_i = (int *)malloc(sizeof(int));
	if (!new_i)
		return ;
	*new_i = i;
	new = ft_lstnew(new_i);
	ft_lstadd_back(index_list, new);
}
