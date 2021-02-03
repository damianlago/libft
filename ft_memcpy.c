#include <libft.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	char src[5] = "Hola";
	char dst[5] = "";
	printf("%s", ft_memcpy(dst, src, 2));
	printf("%s", memcpy(dst, src, 2));
}