/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_compare_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:44:05 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 10:57:18 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		list_compare_back(char *str1, char *str2)
{
	if (ft_strcmp(str1, str2) < 0)
		return (1);
	return (0);
}
