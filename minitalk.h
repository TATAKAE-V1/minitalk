/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:19:06 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/31 21:59:47 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>

void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif