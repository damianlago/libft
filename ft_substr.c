#include <libft.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s2;
	unsigned int i;
	unsigned int j;

	i = start;
	j = 0;
	s2 = malloc((len - start) * sizeof(char));
	if (s == NULL)
		return NULL;
	while (s[i] != '\0' && i <= len)
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	s2[i] = '\0';
	return (s2);
}

int main(void)
{
	char s[] = "hola";
	printf("%s", ft_substr(s, 2, 2));
	return (0);
}
