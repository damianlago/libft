/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:06:59 by dlago-mo          #+#    #+#             */
/*   Updated: 2021/02/15 17:07:03 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_nodo;

	if(!(new_nodo = malloc(sizeof(t_list))))
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}

int	main(void)
{
	char new[] = "Hola";
	t_list *nodo = ft_lstnew((void *)new);
	printf("%s", nodo->content);
	return (0);
}
