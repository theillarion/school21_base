/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:37:15 by glashli           #+#    #+#             */
/*   Updated: 2021/10/13 16:09:15 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LONG_MAX "9223372036854775807"
#define LONG_MIN "9223372036854775808"

static int	ft_get_number(const char	*str, int sign)
{
	int		i;
	int		number;
	char	new_str[20];
	size_t	len;

	number = 0;
	i = 0;
	while (ft_isdigit(str[i]))
		i++;
	len = i;
	i = -1;
	while (i++ < 19 && len == 19 && str[i])
		new_str[i] = str[i];
	new_str[i] = '\0';
	if (sign == 1
		&& (len > 19 || (len == 19 && ft_strncmp(new_str, LONG_MAX, len) >= 0)))
		return (-1);
	else if (sign == -1
		&& (len > 19 || (len == 19 && ft_strncmp(new_str, LONG_MIN, len) >= 0)))
		return (0);
	i = 0;
	while (ft_isdigit(str[i]))
		number = (number * 10) + (str[i++] - '0');
	return (number * sign);
}

int	ft_atoi(const char	*str)
{
	int	sign;

	sign = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return (ft_get_number(str, sign));
}
