#include <libft.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void *aux;

	aux = malloc(count * size);
	if (aux == NULL)
		return NULL;
	ft_bzero(aux, count * size);
	return (aux);
}

int main(void)
{
	printf("%s", ft_calloc(2, 4));
	printf("%s", calloc(2, 4));
	return (0);
}
