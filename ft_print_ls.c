/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:34:12 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 15:37:35 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_print_ls(t_list *list)
{
	int i;

	i = 1;
	while (list != NULL)
	{
		if (ft_strcmp(list->files, "") != 0)
		{
			ft_putstr(list->files);
			ft_putchar('\t');
		}
		list = list->next;
	}
	ft_free_list(list);
	ft_putchar('\n');
}
