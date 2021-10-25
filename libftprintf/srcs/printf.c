/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:53 by glashli           #+#    #+#             */
/*   Updated: 2021/10/25 16:20:40 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*format, ...)
{
	va_list	argv;
	int		count;

	va_start(argv, format);
	count = ft_parser(argv, format);
	va_end(argv);
	return (count);
}
