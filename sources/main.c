/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:24:43 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/24 18:16:54 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_show(t_list* list)
{
	while (list)
	{
		ft_printf("%d ", *((int *)(list->content)));
		list = list->next;
	}
}


int	ft_is_duplicate(t_list* list)
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

int	*ft_malloc_number(number)
{
	int	*nb = (int *)malloc(sizeof(int));
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
	int	*nb;

	i = 0;
	numbers = ft_split(str, ' ');
	if (!numbers)
		return (1);
	while (numbers[i])
	{
		nb = ft_malloc_number(atoi(numbers[i]));
		new = ft_lstnew(nb);
		ft_lstadd_back(a, new);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	t_list	*a = NULL;
	t_list	*b = NULL;

	i = 1;
	while (i < ac)
	{
		if (ft_put_to_stack_a(av[i], &a))
			return (0);
		i++;
	}
	if (ft_is_duplicate(a))
		ft_printf("Error\nThere are duplicate numbers\n");
	ft_show(a);
	ft_show(b);
}
