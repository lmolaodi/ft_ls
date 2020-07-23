/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permissions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:52:54 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:30:27 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*print_permissions()
{
	char *permission;

	permission = ft_strnew(10);
	if (buffer.st_mode & S_ISDIR(buffer.st_mode))
		permission[0] = 'd';
	else if (buffer.st_mode & S_ISLNK(buffer.st_mode))
		permission[0] = 'l';
	else
		permission[0] = '-';
	permission[1] = (buffer.st_mode & S_IRUSR) ? 'r' : '-';
	permission[2] = (buffer.st_mode & S_IWUSR) ? 'w' : '-';
	permission[3] = (buffer.st_mode & S_IXUSR) ? 'x' : '-';
	permission[4] = (buffer.st_mode & S_IRGRP) ? 'r' : '-';
	permission[5] = (buffer.st_mode & S_IWGRP) ? 'w' : '-';
	permission[6] = (buffer.st_mode & S_IXGRP) ? 'x' : '-';
	permission[7] = (buffer.st_mode & S_IROTH) ? 'r' : '-';
	permission[8] = (buffer.st_mode & S_IWOTH) ? 'w' : '-';
	permission[9] = (buffer.st_mode & S_IXOTH) ? 'x' : '-';
	permission[10] = '\0';
	return (permission);
}
