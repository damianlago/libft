/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:54:25 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/04/13 16:26:57 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wrd_nb(char const *s, char c)
{
	int		count;

	count = 1;
	while (*s != '\0')
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

static char	**ft_free(char **s2, int count)
{
	int		i;

	i = 0;
	while (1 < count + 1)
		free(s2[i++]);
	free(s2);
	return (0);
}

char	**ft_return_wrd(char const *s, char c, char **s2)
{
	int	i;
	int	j;
	int	cont;

	i = -1;
	cont = 0;
	while (s[++i] != '\0')
	{
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j > i)
		{
			s2[cont] = (char *)malloc(sizeof(char *) * (j - i + 1));
			if (!s2[cont])
				return (ft_free(s2, cont));
			ft_strlcpy(s2[cont++], s + i, j - i + 1);
			i = j - 1;
		}
	}
	s2[cont] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;

	s2 = (char **)malloc(sizeof(char *) * (wrd_nb(s, c) + 1));
	if (!s || !s2)
		return (0);
	return (ft_return_wrd(s, c, s2));
}
