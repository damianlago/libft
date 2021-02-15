
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list *aux_lst;

	aux_lst = lst;
	while (aux_lst != '\0')
		aux_lst = aux_lst->next;
	return (aux_lst);
}
