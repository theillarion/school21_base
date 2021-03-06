/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:56 by glashli           #+#    #+#             */
/*   Updated: 2021/11/27 13:09:40 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process_number_hex(const char format, va_list	argv)
{
	char			*hex_number;
	unsigned int	number;
	int				size;

	number = va_arg(argv, unsigned int);
	if (format == 'x')
		hex_number = ft_convert_to_base((unsigned int)number, HEX_LOWER);
	else
		hex_number = ft_convert_to_base((unsigned int)number, HEX_UPPER);
	ft_putstr_fd(hex_number, 1);
	size = ft_strlen(hex_number);
	if (hex_number != NULL)
		free(hex_number);
	return (size);
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
			return (write(1, &number, 1));
		else if (format == 'd' || format == 'i')
			ft_putlnbr_fd(number, 1);
		if (number < 0 && format != 'c')
		{
			number = -number;
			count++;
		}		
	}
	else if (format == 'u')
	{
		number = va_arg(argv, unsigned int);
		ft_putlnbr_fd((unsigned int)number, 1);
	}
	return (count + ft_get_discharges(number));
}

int	ft_process_address(va_list argv)
{
	char	*address;
	size_t	number;
	int		count;

	number = va_arg(argv, size_t);
	count = write(1, "0x", 2);
	if (number == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}
	address = ft_convert_to_base(number, HEX_LOWER);
	count += ft_strlen(address);
	ft_putstr_fd(address, 1);
	if (address != NULL)
		free(address);
	return (count);
}

int	ft_process_string(va_list argv)
{
	char	*str;
	int		count;

	str = va_arg(argv, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		count = 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		count = ft_strlen(str);
	}
	return (count);
}
