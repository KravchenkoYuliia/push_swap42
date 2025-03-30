#include "push_swap.h"

int	ft_find_min_int(t_list *lst)
{
	int	i;
	int	i_min;
	long	min;

	i = 0;
	min = val(lst);
	i_min = 0;
	while (lst)
	{
		if (min > val(lst))
		{
			min = val(lst);
			i_min = i;
		}
		i++;
		lst = lst->next;
	}
	return i_min;
}
