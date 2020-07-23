#include "ft_ls.h"

void	ft_insert_list(t_list **listhead, char *files)
{
	t_list *list;

	list = 0;
	list = (t_list *)malloc(sizeof(t_list));
	list->files = files;
	list->next = (*listhead);
	(*listhead) = list;
}
