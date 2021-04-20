#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*alst;
	t_list	*aux;

	if (!f || !lst)
		return (NULL);
	aux = ft_lstnew(f(lst->content));
	if (!aux)
		return (NULL);;
	alst = aux;
	while (lst->next)
	{
		lst = lst->next;
		aux->next = ft_lstnew(f(lst->content));
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	return (alst);
}
