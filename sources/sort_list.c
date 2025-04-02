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
