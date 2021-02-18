/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:55:59 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/18 17:32:15 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_len(nb);
	if (!(s = malloc(sizeof(char) * (1 + len))))
		return (NULL);
	s[len--] = '\0';
	if (nb == 0)
	{
		s = ft_calloc(2, sizeof(char));
		s[0] = 48;
	}
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		s[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
