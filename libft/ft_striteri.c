/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:24:20 by glashli           #+#    #+#             */
/*   Updated: 2021/10/10 23:19:13 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (f != NULL)
	{
		i = 0;
		while (str[i])
		{
			f(i, &str[i]);
			i++;
		}
	}
}