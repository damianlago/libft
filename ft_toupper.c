#include <libft.h>

int ft_toupper(int c)
{
        if (c >= 97 && c <= 123)
                return (c - 32);
        return (c);
}

int main(void)
{
        int c = 'a';
        printf("%d", ft_tolower(c));
}