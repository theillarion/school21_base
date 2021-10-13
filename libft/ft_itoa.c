/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:08:45 by glashli           #+#    #+#             */
/*   Updated: 2021/10/13 20:57:47 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char	*str)
{
	char	*new_str;
	size_t	length;
	size_t	i;

	if (str == NULL)
		length = 0;
	else
		length = ft_strlen(str);
	if (length == 0)
		return (NULL);
	new_str = (char *)malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_str[i] = str[length - 1 - i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static size_t	ft_get_discharges(int number)
{
	size_t	i;

	if (number == 0)
		return (1);
	i = 0;
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

char	*ft_itoa(int number)
{
	size_t			i;
	int				sign;
	char			*str;

	sign = 0;
	if (number < 0)
		sign = 1;
	if (number == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((ft_get_discharges(number) + sign + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (number)
	{
		str[i++] = ft_abs(number % 10) + '0';
		number /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_reverse(str));
}
