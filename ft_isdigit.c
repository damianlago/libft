#include <libft.h>

int ft_isdigit(int c)
{
        if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
                return (1);
        return (0);
}

int main(void)
{
        int c = 9;
        printf("%d", ft_isdigit(c));
        printf("%d", isdigit(c));
        return (0);
}