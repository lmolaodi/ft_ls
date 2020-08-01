/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copypath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:53:43 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:25:35 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_copypath(char *str1, char *str2)
{
	char *path;
	char *path1;
	char *path2;

	path = ft_strdup(str1);
	path1 = ft_strjoin(path, "/");
	path2 = ft_strjoin(path1, str2);

	free(path);
	free(path1);
	return (path2);
}
