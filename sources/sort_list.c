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
	ft_lstclear(a, &free);
	*a = index_list;// a(main) -> list ;; a(ft_sort_list) -> a(main)
	//first step to sort is to put every 1 to A stack and 0 - to B stack
	ft_start_of_radix(a, b);
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


void	ft_print_bits(int i)
{
	int	count;

	count = 7;
	while (count >= 0)
	{
		if (1 & (i >> count))
			ft_printf("1");
		else
			ft_printf("0");
		count--;
	}
}

void	ft_start_of_radix(t_list **a, t_list **b) // all binary that is finishing by 1 is in stack A and 0 - in B
{
	int		i;
	int		number;
	t_list	*temp;

	i = 0;
	number = ft_lstsize(*a) + 1;
	temp = *a;
	while (i < number)
	{
		ft_printf("\ndec %d and his binary: \n\n", ft_int_value(temp));
		ft_print_bits(ft_int_value(temp));
		ft_printf("\n");
		if (1 & (ft_int_value(temp) >> 0))
		{
			ft_rotate_a(a);
			temp = *a;
		}
		else
		{
			ft_push_b(a, b);
				temp = *a;
		}
		i++;
	}
}