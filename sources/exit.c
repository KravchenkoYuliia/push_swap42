/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:58:12 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/25 18:09:49 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *msg, t_list **a, t_list **b)
{
	// & a -> l'adresse de a => jamais nulle
	// a -> le contenu de a => l'adresse de la variable a dans main()
	// *a -> la valeur contenu dans la variable a dans main()

	if (a && *a)
		ft_lstclear(a, &free);
    if (b && *b)
		ft_lstclear(b, &free);
	ft_printf("Error\n%s\n", msg);
	exit(EXIT_FAILURE);
}
