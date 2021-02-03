#include <libft.h>
#include <stdlib.h>

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return NULL;
}

int main(void)
{
	unsigned char dst[] = "";
	unsigned char src[] = "Hola";
	size_t n = 4;
	int c = 'l';
	printf("%s\n", memccpy(dst, src, c, n));
	printf("%s", dst);
	return (0);
}
