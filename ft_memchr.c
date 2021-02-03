#include <libft.h>
#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
        size_t i;

        i = 0;
        while (i < n)
        {
                if (((unsigned char *)s)[i] == (unsigned char)c)
                        return (&((unsigned char *)s)[i]);
                i++;
        }
        return NULL;
}

int main(void)
{
        char s[] = "Hola";
        int c = 'o';
        size_t n = 4;
        printf("%s", ft_memchr(s, c, n));
        return (0);
}