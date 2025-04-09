/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:16:45 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 15:21:26 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int     ft_is_already_sorted(t_list *lst)
{
        while (lst)
        {
                if (lst->next != NULL && val(lst) > val(lst->next))
                {
                        return (0);
                }
                lst = lst->next;
        }
        return (1);
}

void    ft_sort_stack(t_list **a, t_list **b)
{
        if (ft_is_already_sorted(*a))
                return ;
        else if (ft_lstsize(*a) == 2)
                ft_sort_2_elems(a);
        else if (ft_lstsize(*a) == 3)
                ft_sort_3_elems(a);
        else if (ft_lstsize(*a) == 4)
                ft_sort_4_elems(a, b);
        else if (ft_lstsize(*a) == 5)
                ft_sort_5_elems(a, b);
        else
                ft_sort_list(a, b);
}

