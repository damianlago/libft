/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:46:21 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/04 14:47:10 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == ((unsigned char)c))
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
