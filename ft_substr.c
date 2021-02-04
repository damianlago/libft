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
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	s2 = malloc((len - start) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && i <= len)
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	s2[i] = '\0';
	return (s2);
}
