/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:24:43 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/25 18:09:25 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
void	ft_show(t_list* list)
{
	while (list)
	{
		ft_printf("%d ", *((int *)(list->content)));
		list = list->next;
	}
//	write(1, "\n", 1);
}

int	ft_is_overflow(t_list *list)
{
	while (list)
	{
		if (*(long *)list->content < INT_MIN || *(long *)list->content > INT_MAX)
			return (1);
		list = list->next;
	}
	return (0);
}

int	ft_is_duplicate(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list;
		while (temp->next)
		{
			if (*(int *)list->content == *(int *)temp->next->content)
				return (1);
			temp = temp->next;
		}
		list = list->next;
	}
	return (0);
}

long	*ft_malloc_number(long number)
{
	long	*nb = (long *)malloc(sizeof(long));
	if (!nb)
		return (NULL);
	*nb = number;
	return (nb);
}

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

int	ft_wrong_argv_format(int ac, char **av)
{
	int	i;
	int	j;
	char	letter;

	i = 0;
	j = 0;
	while (av[i] && i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			letter = av[i][j];
			if (!ft_isdigit(letter) && letter != '-' && letter != '+' && letter != ' ')
				return (1);
			if ((letter == '-' || letter == '+') && !ft_isdigit(av[i][j + 1]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	t_list	*a = NULL;
	t_list	*b = NULL;

	if (ac == 1)
		ft_exit("Put at least one argument", NULL, NULL);
	if (ft_wrong_argv_format(ac - 1, av + 1))
		ft_exit("Put only positive/negative integer or space", NULL, NULL);
	i = 1;
	while (i < ac)
	{
		if (ft_put_to_stack_a(av[i], &a))
			return (0);
		i++;
	}
	if (ft_is_overflow(a))
		ft_exit("Put number between INT_MIN and INT_MAX", &a, &b);
	if (ft_is_duplicate(a))
		ft_exit("There are duplicate numbers", &a, &b);
	ft_show(a);
	ft_show(b);
	ft_lstclear(&a, &free);
	ft_lstclear(&b, &free);
}
