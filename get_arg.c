/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:15:57 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/19 14:57:01 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		flag(char *flag)
{
	if (ft_strcmp(flag, "-a") == 0)
		return (1);
	else if (ft_strcmp(flag, "-l") == 0)
		return (1);
	else if (ft_strcmp(flag, "-r") == 0)
		return (1);
	else if (ft_strcmp(flag, "-R") == 0)
		return (1);
	else if (ft_strcmp(flag, "-t") == 0)
		return (1);
	else if ((ft_strcmp(flag, "-ar") == 0) || (ft_strcmp(flag, "-ra") == 0))
		return (1);
	else if ((ft_strcmp(flag, "-al") == 0) || (ft_strcmp(flag, "-la") == 0))
		return (1);
	return (0);
}

void	ft_get_flag(char *path, char *argv)
{
	if (ft_strcmp("-a", argv) == 0)
		ft_ls(path, 1);
	else if (ft_strcmp("-l", argv) == 0)
		ft_ls_l(path, 0);
	else if (ft_strcmp("-r", argv) == 0)
		rev_list(path, 0);
	else if ((ft_strcmp("-ar", argv) == 0) || (ft_strcmp("-ra", argv) == 0))
		rev_list(path, 1);
	else if ((ft_strcmp("-al", argv) == 0) || (ft_strcmp("-la", argv) == 0))
		ft_ls_l(path, 1);
	else if (ft_strcmp("-R", argv) == 0)
	{
		ft_ls(path, 0);
		ft_ls_R(path);
	}else
		ft_ls(path, 0);
}
