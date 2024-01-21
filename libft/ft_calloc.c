/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:03:45 by jubaldo           #+#    #+#             */
/*   Updated: 2022/12/12 12:35:47 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_safe(size_t nmemb, size_t size)
{
	size_t	size_max;

	size_max = LONG_MAX;
	if (!nmemb || !size)
		return (0);
	if (nmemb > size_max / size || size > size_max / nmemb)
		return (LONG_MAX);
	return (nmemb * size);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*str;

	str = malloc(is_safe(nmemb, size));
	if (!str)
		return (0);
	ft_memset(str, 0, is_safe(nmemb, size));
	return (str);
}
