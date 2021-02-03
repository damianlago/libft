#include <libft.h>

int ft_isalpha(int c)
{
        if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') || ((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
                return (1);
        return (0);
}

int main(void)
{
        int c = 'A';
        printf("%d", ft_isalpha(c));
        printf("%d", isalpha(c));
        return (0);
}