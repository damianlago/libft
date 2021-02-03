#include <libft.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t i;

        i = 0;
        if (n == 0)
                return (0);
        while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
                i++;
        return (s1[i] - s2[i]);
}

int main(void)
{
        char s1[] = "Hola";
        char s2[] = "HolA";
        size_t n = 4;
        printf("%d", ft_strncmp(s1, s2, n));
        return (0);
}