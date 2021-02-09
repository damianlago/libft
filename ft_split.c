/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:54:25 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/09 15:57:55 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_words_nbr(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c || (s[i] != c && !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **s2;
	int i;
	int j;

	i = 0;
	j = 0;
	s2 = malloc(sizeof(char) * ft_words_nbr((char *)s, c);

}

int		main(void)
{
	printf("%d", ft_words_nbr("aaahaaahaa", 'h'));
	return (0);
}
