/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:38:46 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/04/13 13:50:09 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;

	aux = malloc(count * size);
	if (aux == NULL)
		return (NULL);
	ft_bzero(aux, count * size);
	return (aux);
}
