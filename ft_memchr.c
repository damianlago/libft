#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *a;
    size_t i;

    a = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (a[i] == (unsigned char)c)
            return (&a[i]);
        i++;
    }
    return NULL;
}

int main(void)
{
    unsigned char s[] = "Hola";
    int c = 'o';
    size_t n = 4;
    printf("%s", ft_memchr(s, c, n));
    return (0);
}