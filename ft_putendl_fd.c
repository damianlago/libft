#include <libft.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);
}

int main(void)
{
        char s[] = "Hola";
        ft_putendl_fd(s, 2);
        return (0);
}