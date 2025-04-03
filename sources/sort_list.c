#include "push_swap.h"

int	ft_get_index(t_list *start_node, t_list *node)
{
	int	i;

	i = 0;

	while (start_node)
	{
		if (val(node) > val(start_node))
			i++;
		start_node = start_node->next;	
	}
	return (i);
}

void	ft_sort_list(t_list **a, t_list **b)
{
	(void) b;
	int	i;
	t_list	*start_node;
	t_list	*index_list;
	t_list	*temp;

	index_list = NULL;
	start_node = *a;
	temp = *a;
	while (temp)
	{
		i = ft_get_index(start_node, temp);
		ft_put_to_index_list(&index_list, i);
		temp = temp->next;
	}
	ft_lstclear(a, &free);
	*a = index_list;// a(main) -> list ;; a(ft_sort_list) -> a(main)
	//first step to sort is to put every 1 to A stack and 0 - to B stack
	ft_start_of_radix(a);
}

void	ft_put_to_index_list(t_list **index_list, int i)
{
	t_list	*new;
	int	*new_i;

	new_i = (int *)malloc(sizeof(int));
	if (!new_i)
		return ;
	*new_i = i;
	new = ft_lstnew(new_i);
	ft_lstadd_back(index_list, new);
}


void	ft_start_of_radix(t_list **a);
{
	while (a)
	{
		if (1 & (val(*a) >> 7))
			ft_push_b(a)
		a = a->next;
	}
}
