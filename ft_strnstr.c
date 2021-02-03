#include <libft.h>
#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        size_t i;
        size_t j;

        i = 0;
        if (needle == '\0')
                return ((char *)haystack);
        while (haystack[i] && i < len)
        {
                j = 0;
                while (haystack[i + j] == needle[j])
                {
                        j++;
                        if (needle[j] == '\0')
                                return (&((char *)haystack)[i]);
                }
                i++;
        }
        return NULL;
}

int main(void)
{
        char a[] = "Nuenas pepdwdde pepe damfksfmmfm";
        char b[] = "pepe";
        size_t len = 20;
        printf("%s", ft_strnstr(a, b, len));
        printf("%s", strnstr(a, b, len));
}