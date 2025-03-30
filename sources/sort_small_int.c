#include "push_swap.h"


void   	ft_sort_2_elems(t_list **lst)
{
	if (val((*lst)->next) < val(*lst))
		ft_swap_a(lst);
}

void	ft_sort_3_elems(t_list **lst)
{
	long	first = val(*lst);
	long	second = val((*lst)->next);
	long	third = val((*lst)->next->next);

	if (first > second && first < third)
		ft_swap_a(lst);
	else if (third < first && third > second)
		ft_rotate_a(lst);
	else if (third < second && third > first)
	{
		ft_swap_a(lst);
		ft_rotate_a(lst);
	}
	else if (first < second && first > third)
		ft_rev_rotate_a(lst);
	else if (second < first && second > third)
	{
		ft_swap_a(lst);
		ft_rev_rotate_a(lst);
	}
}
/*
void	ft_sort_4_elems(t_list **a, t_list **b)
{
	int	min;
	(void) b;
	min = ft_find_min_int(*a);
	ft_printf("%d", min);
}
*/
