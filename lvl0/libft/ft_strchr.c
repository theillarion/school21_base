/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:03:49 by glashli           #+#    #+#             */
/*   Updated: 2021/10/13 23:50:36 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int symbol)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)symbol)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == '\0' && (char)symbol == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
