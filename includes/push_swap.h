/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:20:33 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:21:36 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

# include <limits.h>
# include <unistd.h>

void	ft_exit(char *msg, t_list **a, t_list **b);
void	ft_swap(t_list **list);
void	ft_swap_a(t_list **list);
void	ft_swap_b(t_list **list);
void	ft_swap_ab(t_list **lst1, t_list **lst2);
int		ft_is_overflow(t_list *list);
int		ft_is_duplicate(t_list *list);
int		ft_wrong_argv_format(int ac, char **av);
void	ft_push(t_list **dest, t_list **src);
void	ft_push_a(t_list **a, t_list **b);
void	ft_push_b(t_list **a, t_list **b);
void	ft_rotate(t_list **list);
void	ft_rotate_a(t_list **list);
void	ft_rotate_b(t_list **list);
void	ft_rotate_ab(t_list **lst1, t_list **lst2);
void	ft_rev_rotate(t_list **list);
void	ft_rev_rotate_a(t_list **list);
void	ft_rev_rotate_b(t_list **list);
void	ft_rev_rotate_ab(t_list **lst1, t_list **lst2);
long	val(t_list *node);
int		ft_int_value(t_list *node);
void	ft_sort_2_elems(t_list **lst);
void	ft_sort_3_elems(t_list **lst);
void	ft_sort_4_elems(t_list **a, t_list **b);
void	ft_sort_5_elems(t_list **a, t_list **b);
int		ft_find_min_int(t_list *lst);
int		ft_get_index(t_list *start_node, t_list *node);
void	ft_sort_list(t_list **a, t_list **b);
void	ft_put_to_index_list(t_list **index_list, int i);
void	ft_radix(t_list **a, t_list **b);
void	ft_choose_stack(t_list **a, t_list **b, int i);
int		ft_bits_size(t_list *a);
long	*ft_malloc_number(long number);
int		ft_is_already_sorted(t_list *lst);
void	ft_sort_stack(t_list **a, t_list **b);
void	ft_put_to_index_list(t_list **index_list, int i);
void	ft_cut_ft_to_sort_4(t_list **a, t_list **b);
void	ft_additional_to_sort_5(t_list **a, t_list **b);
void	ft_need_to_cut_ft(t_list **a, t_list **b);

#endif
