/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readdir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:26:21 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 10:50:10 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_list *ft_readdir(char *path, int flag)
{
	dir = NULL;
	file = NULL;
	list = NULL;

	if ((dir = opendir(path)))
	{
		while ((file = readdir(dir)) != NULL)
		{
			if (file->d_name[0] != '.' || flag)
				if (ft_strcmp(file->d_name, "") != 0)
					ft_insert_list(&list, file->d_name);
		}
	}else{
		ft_putstr("closing directory");
		closedir(dir);
	}
	return (list);
}
