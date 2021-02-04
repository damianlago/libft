/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:34:45 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/04 16:48:40 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	c[len];

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < len)
	{
		c[i] = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = c[i];
		i++;
	}
	return (dst);
}
