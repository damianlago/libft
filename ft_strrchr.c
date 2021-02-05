/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:47:29 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/05 13:52:12 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
	}
	return (NULL);
}
