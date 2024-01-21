/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:59:30 by jubaldo           #+#    #+#             */
/*   Updated: 2023/09/23 00:49:09 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int	g_isleep = 1;

void	ft_handler(int signal)
{
	g_isleep = 0;
}

void	send_bits(int c, int server_pid)
{
	int	bit;

	bit = 8;
	while (bit)
	{
		if ((c >> (bit - 1)) & 1)
		{
			if (kill(server_pid, SIGUSR1) == -1)
				return ;
		}
		else
		{
			if (kill(server_pid, SIGUSR2) == -1)
				return ;
		}
		bit--;
		while (g_isleep)
			usleep(50);
		g_isleep = 1;
	}
}

int	main(int ac, char **av)
{
	int					i;
	struct sigaction	sa;

	if (ac == 3)
	{
		sa.sa_handler = ft_handler;
		sigaction(SIGUSR1, &sa, NULL);
		i = 0;
		while (av[2][i])
		{
			send_bits(av[2][i], ft_atoi(av[1]));
			i++;
		}
		send_bits(0, ft_atoi(av[1]));
	}
	return (0);
}
