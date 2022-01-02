/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:56:08 by glashli           #+#    #+#             */
/*   Updated: 2021/11/17 11:31:02 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_find(const char	*str, const char symbol)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == symbol)
			return (i);
		i++;
	}
	if (str[i] && symbol)
		return (i);
	return (-1);
}
