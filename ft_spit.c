#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_words_nbr(char const *s, char c)
{
        unsigned int i;
        unsigned int words;

        i = 0;
        words = 0;
        while (s[i])
        {
                if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
                        words++;
                i++;
        }
        return (words);
}

int ft_words_len(char const *s, char c)
{
        unsigned int i;
        unsigned int len;

        i = 0;
        len = 0;
        while (s[i] != c && s[i] != '\0')
        {
                len++;
                i++;
        }
        return (len);
}

char **ft_split(char const *s, char c)
{
        char **s2;
        unsigned int i;
        unsigned int j;
        unsigned int start;
        unsigned int words_nbr;
        unsigned int words_len;

        i = 0;
        j = 0;
        start = 0;
        words_nbr = ft_words_nbr(s, c) + 1;
        s2 = (char **)malloc(words_nbr * sizeof(char));
        while (s[i])
        {
                start = i;
                words_len = ft_words_len(s, c) + 1;
                s2[j] = (char *)malloc(words_len * sizeof(char));
                if (s[i] == c)
                {
                        ft_strlcpy(s2[j], &s[i], i);
                        j++;
                        start = i + 1;
                }
                i++;
        }
}

int main(void)
{
        printf("%p", ft_split("aaaahaaaahaaaa", 'h'));
        return (0);
}