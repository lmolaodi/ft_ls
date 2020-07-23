/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_R_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:29:33 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/19 15:00:40 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_R_path(const char *dir,const char *str)
{
	size_t f_size;
	char *path;
	size_t dirlen;
	size_t strlen;

	dirlen = ft_strlen(dir);
	strlen = ft_strlen(str);
	f_size = dirlen + strlen + 2;
	path = ft_strnew(f_size);
	if (path != NULL)
	{
		ft_memcpy(path, dir, dirlen);
		if (dirlen > 0 && dir[dirlen - 1] != '/')
			path[dirlen++] = '/';
		ft_memcpy(path + dirlen, str, strlen + 1);
	}
	return (path);
}
