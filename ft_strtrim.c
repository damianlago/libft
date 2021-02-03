#include <libft.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
        char *s2;
        int i;

        if (s1 == NULL || set == NULL)
                return NULL;
        while (ft_strchr(set, *s1) != NULL)
                s1++;
        i = ft_strlen(s1);
        while (ft_strchr(set, s1[i]) != NULL)
                i--;
        s2 = malloc((i + 1) * sizeof(char));
        s2 = ft_substr(s1, 0, i + 1);
        return (s2);
}

int main(void)
{
        char s1[] = "o11la";
        char set[] = "oa";
        printf("%s", ft_strtrim(s1, set));
        return (0);
}