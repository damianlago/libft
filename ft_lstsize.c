
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	usigned int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
