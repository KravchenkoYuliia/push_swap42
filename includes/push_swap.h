/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:24:35 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/27 12:49:11 by yukravch         ###   ########.fr       */
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
#endif
