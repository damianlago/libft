#include <libft.h>
#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
        unsigned int i;

        i = 0;
        while (i <= ft_strlen(s))
        {
                if (s[i] == ((unsigned char)c))
                        return (&((char *)s)[i]);
                i++;
        }
        return NULL;
}

int main(void)
{
        char s[] = "Hola";
        int c = 'o';
        printf("%s", ft_strchr(s, c));
        printf("%s", strchr(s, c));
        return (0);
}