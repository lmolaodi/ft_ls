/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_R.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:27:57 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 15:36:01 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls_R(const char *path)
{
	DIR *dirlist;
	struct dirent *filelist;
	struct stat buffer;
	char *temp;

	temp = NULL;
	if (dirlist = opendir(path))
	{
		while ((filelist = readdir(dirlist)) != NULL)
		{
			if (filelist->d_name[0] != '.')
			{
				temp = ft_R_path(path, filelist->d_name);
				if (temp != NULL && !stat(temp, &buffer) && S_ISDIR(buffer.st_mode))
				{
					ft_putchar('\n');
					ft_putendl(temp);
					ft_ls(temp, 0);
					ft_ls_R(temp);
				}else
					free(temp);
			}
		}
	}
	closedir(dir);
}
