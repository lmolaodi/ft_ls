/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:33:57 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 10:32:22 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_path(int argc, char **argv)
{
	if (argc == 2 && !flag(argv[1]))
		return (ft_strdup(argv[1]));
	else if (argc == 3)
		return (ft_strdup(argv[2]));
	else
		return (ft_strdup("."));
	return (NULL);
}

int	main(int argc, char **argv)
{
	char *path;

	path = ft_path(argc, argv);
	if (argc == 1)
		ft_ls(path, 0);
	else if (argc == 2)
		ft_get_flag(path, argv[1]);
	else if (argc == 3)
		ft_get_flag(path, argv[1]);
	else {
		if (argc > 1 && argv[1][0] == '-' && !flag(argv[1]))
			ft_putstr("Invalid Option:\n");
	}
	free(path);
	return (0);
}
