/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:08:45 by glashli           #+#    #+#             */
/*   Updated: 2021/10/23 16:00:29 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(char	*symbol1, char	*symbol2)
{
	char	backup;

	backup = *symbol1;
	*symbol1 = *symbol2;
	*symbol2 = backup;
}

static char	*ft_reverse(char	*str)
{
	size_t	i;
	size_t	j;

	if (str == NULL)
		j = 0;
	else
		j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
	{
		ft_swap(&str[i++], &str[j--]);
	}
	return (str);
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
