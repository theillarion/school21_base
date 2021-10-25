/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:11:02 by glashli           #+#    #+#             */
/*   Updated: 2021/10/25 16:20:40 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_get_discharges(size_t number)
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

void	ft_swap_char(char	*symbol1, char	*symbol2)
{
	char	backup;

	backup = *symbol1;
	*symbol1 = *symbol2;
	*symbol2 = backup;
}

char	*ft_reverse(char	*str)
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
		ft_swap_char(&str[i++], &str[j--]);
	}
	return (str);
}
