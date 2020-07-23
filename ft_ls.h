/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:45:04 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:53 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <sys/types.h>
#include <pwd.h>
#include <sys/dir.h>
#include <grp.h>
#include <stdio.h>
#include <uuid/uuid.h> 
#include <time.h>

t_list		*list;
DIR		*dir;
struct stat	buffer;
struct dirent	*file;
struct passwd	*pwd;
struct group	*grp;

t_list		*ft_readdir(char *path, int flag);
void		ft_insert_list(t_list **listhead, char *files);
void		ft_ls(char *path, int flag);
void		ft_print_ls(t_list *list);
int		flag(char *flag);
void		ft_get_flag(char *path, char *argv);
char		*ft_path(int argc, char **argv);
void		ft_sort_list(t_list *listhead, int (*ft_strcmp)(char *, char *));
int		list_compare(char *str1, char *str2);
char		*print_permissions();
char		*ft_copypath(char *str1,char *str2);
void		ft_print_l_flag(t_list *list, char *path);
char		*ft_get_time(char *str);
void		ft_ls_l(char *path, int flag);
void		rev_list(char *path, int flag);
int		list_compare_back(char *str1, char *str2);
char		*ft_R_path(const char *dir,const char *str);
void		ft_ls_R(const char *path);
void		ft_free_list(t_list *filelist);
