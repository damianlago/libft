#include <libft.h>

int ft_isascii(int c)
{
        if ((unsigned char)c >= 0 && (unsigned char)c <= 127)
                return (1);
        return (0);
}

int main(void)
{
        int c = '&';
        printf("%d", ft_isascii(c));
        printf("%d", isascii(c));
        return (0);
}