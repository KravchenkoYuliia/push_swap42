/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:28:06 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 17:28:08 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_print_list_int(char *list_name, t_list *list)
{
	if (!list)
		ft_printf("List name: %s\nNULL\n\n", list_name);
	else
	{
		ft_printf("List name: %s\n", list_name);
		while (list)
		{
			ft_printf("%d ", *((int *)(list->content)));
			list = list->next;
		}
		ft_printf("\n\n");
	}
}

void	ft_print_list_char(char *list_name, t_list *list)
{
	if (!list)
		ft_printf("List name: %s\nNULL\n\n", list_name);
	else
	{
		ft_printf("List name: %s\n", list_name);
		while (list)
		{
			ft_printf("%c ", *((char *)(list->content)));
			list = list->next;
		}
		ft_printf("\n\n");
	}
}
