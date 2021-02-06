/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:41:17 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/04 15:42:50 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		s2 = malloc(sizeof(char));
		if (!s2)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	s2 = malloc((len + 1) * sizeof(*s));
	if (!s2)
		return (NULL);
	while (i <= len)
	{
		s2[j] = s[i + start];
		i++;
		j++;
	}
	s2[i] = '\0';
	return (s2);
}
