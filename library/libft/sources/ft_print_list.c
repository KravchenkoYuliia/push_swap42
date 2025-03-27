#include "libft.h"
#include "ft_printf.h"

void	ft_print_list_int(char *list_name, t_list* list)
{
	if (!list)
		ft_printf("List name: %s\nNULL\n", list_name);
	else
	{
		ft_printf("List name: %s\n", list_name);
		while (list)
		{
			ft_printf("%d ", *((int *)(list->content)));
			list = list->next;
		}
		ft_printf("\n");
	}
}

void	ft_print_list_char(char *list_name, t_list* list)
{
	if (!list)
		ft_printf("List name: %s\nNULL\n", list_name);
	else
	{
		ft_printf("List name: %s\n", list_name);
		while (list)
		{
			ft_printf("%c ", *((char *)(list->content)));
			list = list->next;
		}
		ft_printf("\n");
	}
}
