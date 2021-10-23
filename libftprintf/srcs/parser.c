/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:49 by glashli           #+#    #+#             */
/*   Updated: 2021/10/24 02:43:38 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_switch_parser(va_list argv, const char	format)
{
	int	count;

	count = 0;
	if (format[i] == '%')
		count += write(1, "%", 1);
	if (format[i] == 's')
		count += ft_process_string(argv);
	else if (format[i] == 'p')
		count += ft_process_address(argv);
	else if (ft_find(INT_ARGV, format[i]) != -1)
		count += ft_process_number_dec(format[i], argv);
	else if (ft_find(HEX_ARGV, format[i]) != -1)
		count += ft_process_number_hex(format[i], argv);
	return (count);
}

int	ft_parser(va_list argv, const char	*format)
{
	size_t	i;
	int		count;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == ' ' && format[i + 1])
			{
				count += write(1, " ", 1);
				i++;
			}	
			switch_parser(argv, format[i]);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	return (count);
}
