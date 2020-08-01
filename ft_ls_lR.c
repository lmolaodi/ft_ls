#include "ft_ls.h"

void	ft_ls_lR(char *path, int flag)
{
	DIR *dirlist;
	struct dirent *filelist;
	struct stat buffer;
	char *temp;

	temp = NULL;
	if (dirlist = opendir(path))
	{
		while ((filelist = readdir(dirlist)) != NULL)
		{
			if (filelist->d_name[0] != '.')
			{
				temp = ft_R_path(path, filelist->d_name);
				if (temp != NULL && !stat(temp, &buffer) && S_ISDIR(buffer.st_mode))
				{
					ft_putchar('\n');
					ft_putendl(temp);
					ft_ls_l(temp, 0);
					free(temp);
				}else
					free(temp);
			}
		}
	}
	closedir(dirlist);
}
