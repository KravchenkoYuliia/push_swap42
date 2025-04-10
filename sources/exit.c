/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:58:12 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 16:34:39 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *msg, t_list **a, t_list **b)
{
	if (a && *a)
		ft_lstclear(a, &free);
	if (b && *b)
		ft_lstclear(b, &free);
	ft_printf("Error\n%s\n", msg);
	exit(EXIT_FAILURE);
}
