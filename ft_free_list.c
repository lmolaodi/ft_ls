/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:40:27 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 14:49:34 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_free_list(t_list *filelist)
{
	list = NULL;
	while (filelist != NULL)
	{
		list = filelist;
		filelist = filelist->next;
		free(list);
	}
}
