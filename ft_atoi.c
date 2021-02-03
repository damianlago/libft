// #include <libft.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
        int i;
        int res;
        int sign;

        i = 0;
        res = 0;
        sign = 1;
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        sign *= -1;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
                res = (res * 10) + (str[i++] - '0');
        return (res * sign);
}
int main(void)
{
        char str[] = " 121";
        printf("%d", ft_atoi(str));
        return (0);
}