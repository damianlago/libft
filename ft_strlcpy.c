#include <libft.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
        size_t i;

        i = 0;
        while (i < dstsize - 1)
        {
                dst[i] = src[i];
                i++;
        }
        dst[i] = '\0';
        return (ft_strlen(src));
}

int main(void)
{
        char dst[4] = "";
        const char src[] = "hola";
        size_t dstsize = 4;
        printf("%lu", ft_strlcpy(dst, src, dstsize));
        printf("%lu", strlcpy(dst, src, dstsize));
        return (0);
}