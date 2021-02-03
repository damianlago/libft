#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//         size_t i;
//         size_t j;
//         char *str;

//         str = (char *)malloc(sizeof(*s) * (len + 1));
//         if (!str)
//                 return (NULL);
//         i = 0;
//         j = 0;
//         while (s[i])
//         {
//                 if (i >= start && j < len)
//                 {
//                         str[j] = s[i];
//                         j++;
//                 }
//                 i++;
//         }
//         str[j] = 0;
//         return (str);
// }

// int ft_count(char const *s, char c)
// {
//         unsigned int i;
//         unsigned int j;

//         i = 0;
//         j = 1;
//         while (s[i])
//         {
//                 if (s[i] == c)
//                         j++;
//                 i++;
//         }
// }

// char **ft_split(char const *s, char c)
// {
//         char **s2;
//         unsigned int i;
//         unsigned int start;
//         unsigned int k;
//         unsigned int count;

//         i = 0;
//         start = 0;
//         k = 0;
//         *s2 = malloc(count*sizeof(char));
//         while (s[i])
//         {
//                 start = i;
//                 if (s[i] == c)
//                 {
//                         ft_substr(s2[k], start, i);
//                         k++;
//                         start = i + 1;
//                 }
//                 i++;
//         }
// }

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
}

int main(void)
{
        printf("%p", ft_split("aaaahaaaahaaaa", 'h'));
        return (0);
}