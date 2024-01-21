/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:53:57 by jubaldo           #+#    #+#             */
/*   Updated: 2022/12/02 16:00:18 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == character)
			return (str + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "hello world";
	printf("%s", (char *)ft_memchr(str, 'w', 7));
}*/