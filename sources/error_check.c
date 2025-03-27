/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:42:56 by yukravch          #+#    #+#             */
/*   Updated: 2025/03/27 12:48:16 by yukravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_is_overflow(t_list *list)
{
        while (list)
        {
                if (*(long *)list->content < INT_MIN || *(long *)list->content > INT_MAX)
                        return (1);
                list = list->next;
        }
        return (0);
}

int     ft_is_duplicate(t_list *list)
{
        t_list  *temp;

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

int     ft_wrong_argv_format(int ac, char **av)
{
        int     i;
        int     j;
        char    letter;

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

