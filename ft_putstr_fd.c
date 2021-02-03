#include <libft.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
        int i;

        i = 0;
        while (s[i] != '\0')
        {
                ft_putchar_fd(s[i], fd);
                i++;
        }
}

int main(void)
{
        char s[] = "Hola";
        int fd = 1;
        ft_putstr_fd(s, fd);
        return (0);
}