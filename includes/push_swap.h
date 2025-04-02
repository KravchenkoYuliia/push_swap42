/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:24:35 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/31 20:25:42 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

#include <limits.h>

void	ft_exit(char *msg, t_list **a, t_list **b);
void	ft_swap(t_list **list);
void	ft_swap_a(t_list **list);
void	ft_swap_b(t_list **list);
void	ft_swap_ab(t_list **lst1, t_list **lst2);
int     ft_is_overflow(t_list *list);
int     ft_is_duplicate(t_list *list);
int     ft_wrong_argv_format(int ac, char **av);
void    ft_push(t_list **dest, t_list **src);
void    ft_push_a(t_list **a, t_list **b);
void    ft_push_b(t_list **a, t_list **b);
void	ft_rotate(t_list **list);
void	ft_rotate_a(t_list **list);
void	ft_rotate_b(t_list **list);
void	ft_rotate_ab(t_list **lst1, t_list **lst2);

void	ft_rev_rotate(t_list **list);
void	ft_rev_rotate_a(t_list **list);
void	ft_rev_rotate_b(t_list **list);
void	ft_rev_rotate_ab(t_list **lst1, t_list **lst2);

long	val(t_list *node);
void    ft_sort_2_elems(t_list **lst);
void    ft_sort_3_elems(t_list **lst);
void	ft_sort_4_elems(t_list **a, t_list **b);
void	ft_sort_5_elems(t_list **a, t_list **b);

int	ft_find_min_int(t_list *lst);
int	ft_get_index(t_list *start_node, t_list *node);
void	ft_sort_list(t_list **a, t_list **b);
void	ft_put_to_index_list(t_list **index_list, int i);

#endif
