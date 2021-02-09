/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:54:25 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/09 14:30:09 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_words_nbr(char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 1;
	if (s[i] == (char)c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c || (s[i] != (char)c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

size_t		ft_words_len(char *s, char c)
{
	size_t i;
	size_t len;

	len = 0;
	i = 0;
	while (s[i] && s[i] != (char)c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;
	size_t	words_nbr;

	i = 0;
	words_nbr = ft_words_nbr(((char *)s), c);
	s2 = malloc(sizeof(char *) * (words_nbr + 1));
	if (!s)
		return (NULL);
	while (i <= words_nbr)
	{
		s2[i] = malloc(sizeof(char) * (ft_words_len(((char *)s), c) + 1));
		ft_strlcpy(s2[i], ((char *)s), ft_words_len(((char *)s), c));
		i++;
	}
	return (s2);
}
