/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:25:44 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:11:01 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	rev_list(char *path, int flag)
{
	list = NULL;
	list = ft_readdir(path, flag);
	while (list == NULL)
	{
		ft_putstr("File does not exists:\n");
		return ;
	}
	ft_sort_list(list, list_compare_back);
	if (flag == 2)
		ft_print_l_flag(list, path);
	else
		ft_print_ls(list);
	ft_free_list(list);
}
