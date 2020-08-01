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

void	ft_free()
{
	free(time0);
	free(time1);
	free(time2);
	free(time3);
	free(time4);
}

char	*ft_get_time(char *str)
{
	char **strcpy;
	int i;
	int j;
	int len;

	i = 0;
	j = 0;

	strcpy = ft_strsplit(str, ' ');
	time0 = ft_strdup(strcpy[1]);
	time1 = ft_strjoin(time0, " ");
	time2 = ft_strjoin(time1, strcpy[2]);
	time3 = ft_strjoin(time2, " ");
	time4 = ft_strsub(strcpy[3], 0, 5);
	time5 = ft_strjoin(time3, time4);
	len = ft_strlen(strcpy[j++]);
	while (i <= len + 1)
	{
		free(strcpy[i]);
		i++;
	}
	free(strcpy);
	ft_free();
	return (time5);
}
