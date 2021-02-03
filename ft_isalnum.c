#include <libft.h>

int ft_isalnum(int c)
{
        if (ft_isdigit(c) > 0 || ft_isalpha(c) > 0)
                return (1);
        return (0);
}

int main(void)
{
        int c = '.';
        printf("%d", ft_isalnum(c));
        printf("%d", isalnum(c));
        return (0);
}