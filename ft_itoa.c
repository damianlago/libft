/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:55:59 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/04 15:56:01 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_nbrlen(int n)
{
	size_t i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	unsigned int	sign;
	unsigned int	len;
	unsigned int	i;	

	sign = 0;
	len = ft_nbrlen(n);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	s = malloc((len + 1 + sign) * sizeof(char));
	if (!s)
		return (NULL);
	if (sign == 1)
	{
		s[0] = '-';
		i++;
	}
	while (i < len)
	{
		s[i] = n / 10 + '\0';
		n %= 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	main(void)
{
	int n = -42;
	printf("%s", ft_itoa(n));
	return (0);
}
