/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_time.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:15:40 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:24:19 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_get_time(char *str)
{
	char **strcpy;
	char *time;
	int i;

	i = 1;
	strcpy = ft_strsplit(str, ' ');
	time = ft_strdup(strcpy[i]);
	time = ft_strjoin(time, " ");
	time = ft_strjoin(time, strcpy[2]);
	time = ft_strjoin(time, " ");
	time = ft_strjoin(time, ft_strsub(strcpy[3], 0, 5));
	return (time);
}
