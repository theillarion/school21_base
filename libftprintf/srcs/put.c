/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:59 by glashli           #+#    #+#             */
/*   Updated: 2021/10/24 02:12:47 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_fd(char symbol, int fd)
{
	write(fd, &symbol, 1);
}

void	ft_putstr_fd(char	*str, int fd)
{
	if (str != NULL)
		write(fd, str, ft_strlen(str));
}

void	ft_putlnbr_fd(long number, int fd)
{
	if (number == -1 - 9223372036854775807)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('9', fd);
		ft_putlnbr_fd(223372036854775808, fd);
	}
	else
	{
		if (number < 0)
		{
			ft_putchar_fd('-', fd);
			number *= -1;
		}
		if (number > 9)
		{
			ft_putlnbr_fd(number / 10, fd);
			ft_putlnbr_fd(number % 10, fd);
		}
		else
			ft_putchar_fd(number + 48, fd);
	}
}
