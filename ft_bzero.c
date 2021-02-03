#include <libft.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}

int main(void)
{
	char s[] = "Hola";
	unsigned int n = 1;
	ft_bzero(s, n);
	printf("%s", s);
	return (0);
}
