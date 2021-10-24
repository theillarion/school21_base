/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:56 by glashli           #+#    #+#             */
/*   Updated: 2021/10/24 02:12:36 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_process_number_hex(const char	format, va_list	argv)
{
	char			*hex_number;
	unsigned int	number;

	number = va_arg(argv, unsigned int);
	if (format == 'x')
		hex_number = ft_convert_to_base((unsigned int)number, HEX_LOWER);
	else if (format == 'X')
		hex_number = ft_convert_to_base((unsigned int)number, HEX_UPPER);
	ft_putstr_fd(hex_number, 1);
	return (ft_strlen(hex_number));
}

int	ft_process_number_dec(const char format, va_list argv)
{
	long	number;
	int		count;

	count = 0;
	number = 0;
	if (ft_find("cdi", format) != -1)
	{
		number = va_arg(argv, int);
		if (format == 'c')
			ft_putchar_fd(number, 1);
		else if (format == 'd' || format == 'i')
			ft_putlnbr_fd(number, 1);
	}
	else if (format == 'u')
	{
		number = va_arg(argv, unsigned int);
		ft_putlnbr_fd((unsigned int)number, 1);
	}
	if (format == 'c')
		count = 1;
	else
		count = ft_get_discharges(number);
	if (number < 0)
		count++;
	return (count);
}

int	ft_process_address(va_list argv)
{
	char	*address;
	int		count;

	count = write(1, "0x", 2);
	address = ft_convert_to_base(va_arg(argv, size_t), HEX_LOWER);
	count += ft_strlen(address);
	ft_putstr_fd(address, 1);
	return (count);
}

int	ft_process_string(va_list argv)
{
	char	*str;
	int		count;

	str = va_arg(argv, char *);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}