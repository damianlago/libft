// #include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
        long nb;

        nb = n;
        if (n < 0)
        {
                nb *= -1;
                ft_putchar_fd('-', fd);
        }
        if (nb > 9)
                ft_putnbr_fd(nb / 10, fd);
        ft_putchar_fd((nb % 10) + '0', fd);
}

int main(void)
{
        ft_putnbr_fd(1234, 2);
        return (0);
}