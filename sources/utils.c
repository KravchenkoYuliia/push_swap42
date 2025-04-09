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

long    val(t_list *node)
{
        return *(long *)node->content;
}

int     ft_int_value(t_list *node)
{
        return *(int *)node->content;
}

long    *ft_malloc_number(long number)
{
        long    *nb = (long *)malloc(sizeof(long));
        if (!nb)
                return (NULL);
        *nb = number;
        return (nb);
}

