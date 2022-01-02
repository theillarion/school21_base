/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:42 by glashli           #+#    #+#             */
/*   Updated: 2021/10/28 19:08:17 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t ft_get_discharges_base(size_t number, int base_int)
{
	size_t	i;

	i = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number /= base_int;
		i++;
	}
	return (i);
}

char	*ft_convert_to_base(size_t number, char	*base)
{
	char	*result;
	int		base_int;
	size_t	count;
	size_t	i;

	base_int = ft_strlen(base);
	count = ft_get_discharges_base(number, base_int);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (number == 0)
		result[i++] = base[0];
	while (number)
	{
		result[i++] = base[number % base_int];
		number /= base_int;
	}
	result[i] = '\0';
	return (ft_reverse(result));
}
