/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:23:43 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 14:53:15 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_sort_list(t_list *listhead, int (*ft_strcmp)(char *, char *))
{
	t_list *file1;
	t_list *file2;
	char *temp;

	file1 = listhead;
	while (file1->next != NULL)
	{
		file2 = file1->next;
		while (file2 != NULL)
		{
			if (ft_strcmp(file1->files, file2->files))
			{
				temp = file1->files;
				file1->files = file2->files;
				file2->files = temp;
			}
			file2 = file2->next;
		}
		file1 = file1->next;
	}
}
