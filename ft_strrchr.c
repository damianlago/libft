#include <libft.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c)
{
        size_t i;

        i = ft_strlen(s);
        while (i >= 0)
        {
                if (s[i] == (unsigned char)c)
                        return (&((char *)s)[i]);
                i--;
        }
        return NULL;
}

int main(void)
{
        char s[] = "Holao";
        int c = 'o';
        printf("%s", ft_strrchr(s, c));
        printf("%s", strrchr(s, c));
        return (0);
}