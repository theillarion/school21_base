/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:42 by glashli           #+#    #+#             */
/*   Updated: 2021/10/24 02:12:53 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_convert_to_base(long number, char	*base)
{
	char	result[60];
	int		sign;
	int		base_int;
	size_t	i;

	base_int = ft_strlen(base);
	sign = 1;
	if (number < 0)
		sign = -1;
	i = 0;
	while (number != 0)
	{
		result[i++] = base[number % base_int];
		number /= base_int;
	}
	if (sign == -1)
		result[i++] = '-';
	result[i] = '\0';
	return (ft_reverse(result));
}
