#include "libft.h"
#include "ft_printf.h"

void	ft_print_list_int(t_list* list)
{
	while (list)
	{
		ft_printf("%d ", *((int *)(list->content)));
		list = list->next;
	}
	ft_printf("\n");
}

void	ft_print_list_char(t_list* list)
{
	while (list)
	{
		ft_printf("%c ", *((char *)(list->content)));
		list = list->next;
	}
	ft_printf("\n");
}
