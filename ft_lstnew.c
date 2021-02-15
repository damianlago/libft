
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}		t_list;

t_list	*ft_lstnew(void *content)
{
	t_list *new_nodo;

	if(!(new_nodo = malloc(sizeof(t_list))))
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}

int	main(void)
{
	char new[] = "Hola";
	t_list *nodo = ft_lstnew((void *)new);
	printf("%s", nodo->content);
	return (0);
}
