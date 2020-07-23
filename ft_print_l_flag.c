/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_l_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:51:34 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:51 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_print_l_flag(t_list *list, char *path)
{
	char *strpath;

	while (list != NULL)
	{
		strpath = ft_copypath(path, list->files);
		lstat(strpath, &buffer);
		ft_putstr(print_permissions());
		ft_putchar(' ');
		ft_putnbr((int)buffer.st_nlink);
		ft_putchar(' ');
		if ((pwd = getpwuid(getuid())) != NULL)
			ft_putstr(pwd->pw_name);
		else
			ft_putnbr(buffer.st_uid);
		ft_putchar(' ');
		if ((grp = getgrgid(getgid())) != NULL)
			ft_putstr(grp->gr_name);
		else
			ft_putnbr(buffer.st_gid);
		ft_putchar(' ');
		ft_putnbr((int)buffer.st_size);
		ft_putchar(' ');
		ft_putstr(ft_get_time(ctime(&buffer.st_mtime)));
		ft_putchar(' ');
		ft_putstr(list->files);
		ft_putchar('\n');
		list = list->next;
	}
}
