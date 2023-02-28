/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 07:42:38 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/10 07:43:19 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	signals_handler(int sig)
{
	static char	c;
	static int	i;

	c = c | (sig == SIGUSR1);
	if (++i == 8)
	{
		i = 0;
		ft_putchar(c);
		c = 0;
	}
	else
		c = c << 1;
}

int	main(void)
{
	ft_putstr("Server PID is: ");
	ft_putnbr(getpid());
	ft_putstr("\nThe Clients's Message:\n");
	signal(SIGUSR1, signals_handler);
	signal(SIGUSR2, signals_handler);
	while (1)
	{
		pause();
	}
	return (0);
}
