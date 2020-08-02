/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:51:34 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:50 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls_l(char *path, int flag)
{
	list = NULL;
	list = ft_readdir(path, flag);
	if (list == NULL)
	{
		ft_putstr("\n");
		ft_putstr("File does not exists: ");
		ft_putstr(path);
		ft_putchar('\n');
		return ;
	}
	ft_sort_list(list, list_compare);
	ft_print_l_flag(list, path);
	ft_free_list(list);
	closedir(dir);
}
