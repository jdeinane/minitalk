/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:37:00 by jubaldo           #+#    #+#             */
/*   Updated: 2022/11/30 21:33:07 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != 0)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "test";

	t_list	*el1;
	t_list	*el2;
	t_list	*el3;
	t_list	*el4;
	t_list	*el5;
	t_list	*el6;
	t_list	*ret;

	if(!(el1 = malloc(sizeof(t_list))))
		return (0);
	if(!(el2 = malloc(sizeof(t_list))))
		return (0);
	if(!(el3 = malloc(sizeof(t_list))))
		return (0);
	if(!(el4 = malloc(sizeof(t_list))))
		return (0);
	if(!(el5 = malloc(sizeof(t_list))))
		return (0);
	if(!(el6 = malloc(sizeof(t_list))))
		return (0);
	
	el1->next = el2;
	el2->next = el3;
	el3->next = el4;
	el4->next = el5;
	el5->next = el6;
	el6->next = NULL;

	el6->content = (void *)str;
	ret = ft_lstlast(el1);
	printf("\n%s\n", (char *)ret->content);
}*/