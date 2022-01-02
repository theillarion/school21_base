/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:54:42 by glashli           #+#    #+#             */
/*   Updated: 2021/10/09 18:50:37 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
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
			ft_putnbr_fd(number / 10, fd);
			ft_putnbr_fd(number % 10, fd);
		}
		else
			ft_putchar_fd(number + 48, fd);
	}
}
