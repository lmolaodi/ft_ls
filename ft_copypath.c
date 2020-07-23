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

	path = ft_strdup(str1);
	path = ft_strjoin(path, "/");
	path = ft_strjoin(path, str2);

	return (path);
}
