#include <libft.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char c[len];
	size_t i;

	i = 0;
	while (i < len)
	{
		c[i] = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = c[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	unsigned char dst[] = "Pepe";
	unsigned char src[] = "Hola";
	size_t n = 4;
	printf("%s", ft_memmove(dst, src, n));
	return (0);
}
