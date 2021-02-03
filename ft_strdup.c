#include <libft.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char *s2;
	int len;
	int i;

	i = 0;
	len = ft_strlen(s1);
	s2 = malloc((len) * sizeof(char));
	if (s2 == NULL)
		return NULL;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main(void)
{
	char s1[] = "Hola";
	char *s2 = ft_strdup(s1);
	printf("%s", s2);
	return (0);
}
