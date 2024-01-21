/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:28:12 by jubaldo           #+#    #+#             */
/*   Updated: 2022/12/02 15:57:26 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_hitoa(char *str, long int nb, int i, int count)
{
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		i++;
	}
	str[count] = '\0';
	while (count-- > i)
	{
		str[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int			i;
	int			count;
	char		*str;
	long int	nb;

	i = 0;
	nb = n;
	count = size(nb);
	if (nb < 0 || count == 0)
		count++;
	str = malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	ft_hitoa(str, nb, i, count);
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_itoa(1234556));
	return(0);
}*/