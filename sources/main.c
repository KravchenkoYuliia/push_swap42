/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:24:43 by yukravch          #+#    #+#             */
/*   Updated: 2025/04/09 15:28:09 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	ft_put_to_stack_a(char *str, t_list **a)
{
	int	i;
	t_list	*new;
	char	**numbers;
	long	*nb;

	i = 0;
	numbers = ft_split(str, ' ');
	if (!numbers)
		return (1);
	while (numbers[i])
	{
		nb = ft_malloc_number(ft_atol(numbers[i]));
		new = ft_lstnew(nb);
		ft_lstadd_back(a, new);
		free(numbers[i]);
		i++;
	}
	free(numbers);
	return (0);
}

void	ft_basic_check(int ac, char **av, t_list *a, t_list *b)
{
	if (ac == 1)
		ft_exit("Put at least one argument", NULL, NULL);
	if (ft_wrong_argv_format(ac - 1, av + 1))
		ft_exit("Put only positive/negative integer or space", NULL, NULL);
	if (ft_is_overflow(a))
		ft_exit("Put number between INT_MIN and INT_MAX", &a, &b);
	if (ft_is_duplicate(a))
		ft_exit("There are duplicate numbers", &a, &b);
}

int	main(int ac, char **av)
{
	int	i;

	t_list	*a = NULL;
	t_list	*b = NULL;

	ft_basic_check(ac, av, a, b);
	i = 1;
	while (i < ac)
	{
		if (ft_put_to_stack_a(av[i], &a))
			return (0);
		i++;
	}
	ft_sort_stack(&a, &b);

	ft_print_list_int("a", a);
	ft_print_list_int("b", b);
	
	ft_lstclear(&a, &free);
	ft_lstclear(&b, &free);
}
