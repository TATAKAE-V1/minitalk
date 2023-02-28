/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 07:42:42 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/10 08:28:25 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_signals(int pid, char *str)
{
	int	i;

	while (*str)
	{
		i = 8;
		while (i--)
		{
			if (*str >> i & 1)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(0);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					exit(0);
			}
			usleep(120);
		}
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3 || ft_strlen(argv[2]) == 0 || argv[1][0] == '-')
	{
		ft_putstr("Enter The PID and STRING");
		exit(0);
	}
	send_signals(ft_atoi(argv[1]), argv[2]);
	return (0);
}
