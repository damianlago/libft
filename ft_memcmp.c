#include <libft.h>
#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        size_t i;

        i = 0;
        while (i < n)
        {
                if (((char *)s1)[i] != ((char *)s2)[i])
                        return (((char *)s1)[i] - ((char *)s2)[i]);
                i++;
        }
        return (0);
}

int main(void)
{
        char s1[] = "Hola";
        char s2[] = "HolA";
        size_t n = 4;
        printf("%d", ft_memcmp(s1, s2, n));
        printf("%d", memcmp(s1, s2, n));
        return (0);
}