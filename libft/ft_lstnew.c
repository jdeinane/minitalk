/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:45:28 by jubaldo           #+#    #+#             */
/*   Updated: 2022/12/02 16:06:30 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelt;

	newelt = (t_list *)malloc(sizeof(*newelt));
	if (!(newelt))
		return (NULL);
	newelt->content = content;
	newelt->next = NULL;
	return (newelt);
}
