/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:59:54 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 00:20:30 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = size_dest;
	if (size > 0 && size - 1 > size_dest)
	{
		while (i < size - 1 && src[i - size_dest])
		{
			dest[i] = src[i - size_dest];
			i++;
		}
		dest[i] = '\0';
	}
	if (size_dest > size)
		size_dest = size;
	return (size_dest + size_src);
}
