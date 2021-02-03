#include <libft.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
        size_t i;
        size_t j;
        size_t k;

        i = 0;
        j = ft_strlen(dst);
        k = ft_strlen(dst) + j;
        while (i < dstsize - 1)
                dst[j++] = src[i++];
        return (k);
}

int main(void)
{
        char dst[] = "Hola";
        char src[] = "Pepe";
        size_t n = 4;
        printf("%lu", ft_strlcat(dst, src, n));
        printf("%s", dst);
        printf("%lu", strlcat(dst, src, n));
        printf("%s", dst);
        return (0);
}