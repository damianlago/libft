#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *s)
{
        size_t i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
        char *s3;
        unsigned int i;
        unsigned int j;
        unsigned int x;

        i = 0;
        j = 0;
        x = ft_strlen(s1) + ft_strlen(s2);
        s3 = malloc(x * sizeof(char));
        if ((s1 == NULL) || (s2 == NULL) || (s3 == NULL))
                return NULL;
        while (s1[i] != '\0')
                s3[j++] = s1[i++];
        i = 0;
        while (s2[i] != '\0')
                s3[j++] = s2[i++];
        s3[j] = '\0';
        return (s3);
}

int ft_len_nb(int n)
{
        unsigned int i;

        i = 0;
        while (n != 0)
        {
                n /= 10;
                i++;
        }
        return (i);
}

char *ft_itoa(int n)
{
        char *s;
        long nb;
        unsigned int i;

        i = 0;
        nb = n;
        s = malloc(ft_len_nb(n) * sizeof(char));
        if (n < 0)
        {
                s[i++] = '-';
                nb *= -1;
        }
        if (nb > 10)
        {
                s = ft_strjoin(ft_itoa(nb / 10), ft_itoa(nb % 10));
        }
        if (nb <= 0 && nb <= 9)
        {
                s[i++] = (nb * 10) + '0';
        }
        return (s);
}

int main(void)
{
        printf("%s", ft_itoa(475));
        return (0);
}