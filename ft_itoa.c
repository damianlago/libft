/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:55:59 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/08 16:12:48 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	s = malloc(2 * sizeof(char));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-n));
	}
	else if (n >= 10)
	{
		s = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else if (n >= 0 && n <= 9)
	{
		s[0] = n + '0';
		s[1] = '\0';
	}
	return (s);
}
