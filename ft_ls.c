/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:50:52 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 10:44:29 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls(char *path, int flag)
{
	DIR *dir;
	struct stat buffer;
	struct dirent *file;
	t_list	*list;

	list = 0;
	lstat(path, &buffer);
	if (!(dir = opendir(path)))
	{
		ft_putstr("No file or Directory:\n");
		return ;
	}
	while ((file = readdir(dir)) != NULL)
		if (file->d_name[0] != '.' || flag)
			ft_insert_list(&list, file->d_name);
	ft_sort_list(list, list_compare);
	ft_print_ls(list);
	ft_free_list(list);
	closedir(dir);
}
