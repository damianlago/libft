#include <libft.h>
#include <stdlib.h>

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

int main(void)
{
        char s1[] = "Buenas";
        char s2[] = "Tardes";
        printf("%s", ft_strjoin(s1, s2));
        return (0);
}