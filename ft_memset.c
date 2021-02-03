#include <libft.h>
#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}

int main(void)
{
	char b[] = "Hola";
	int c = 'a';
	size_t len = 2;
	printf("%s\n", ft_memset(b, c, len));
	printf("%s", memset(b, c, len));
	return (0);
}
