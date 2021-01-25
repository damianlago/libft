#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a;
    unsigned char *b;
    size_t i;

    a = (unsigned char *)s1;
    b = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (a[i] == b[i])
            i++;
        else
            return (a[i] - b[i]);
    }
    return (0);
}
int main(void)
{
    unsigned char s1[] = "Hola";
    unsigned char s2[] = "Hola";
    size_t n = 4;
    printf("%d\n", ft_memcmp(s1, s2, n));
    printf("%d", memcmp(s1, s2, n));

    return (0);
}
