/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:47:47 by jubaldo           #+#    #+#             */
/*   Updated: 2022/12/02 15:50:55 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*n;

	n = needle;
	if (*n == '\0')
		return ((char *)haystack);
	while (len--)
	{
		if (*n == *haystack)
			n++;
		else
		{
			haystack -= (n - needle);
			len += (n - needle);
			n = needle;
		}
		haystack++;
		if (*n == '\0')
			return ((char *)(haystack - (n - needle)));
		if (*haystack == '\0')
			break ;
	}
	return (NULL);
}
