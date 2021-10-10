/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:58:12 by glashli           #+#    #+#             */
/*   Updated: 2021/10/09 17:10:19 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0 && dest[i])
	{
		while (i != size - 1 && (src[i]))
		{
			dest[i] = src[i];
			i++;
		}
		if (ft_strlen(dest) != 0)
			dest[i] = '\0';
	}
	return (ft_strlen(src));
}
