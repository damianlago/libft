#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

int main(void)
{
        ft_putchar_fd('c', 2);
}