/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:44:42 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/08 11:41:45 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) != NULL)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i--;
	s2 = malloc((i + 1) * sizeof(char));
	s2 = ft_substr(s1, 0, i + 1);
	return (s2);
}
