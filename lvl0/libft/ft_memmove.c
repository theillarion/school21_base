/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:49:48 by glashli           #+#    #+#             */
/*   Updated: 2021/10/10 15:21:55 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest < src)
	{
		while (i < len)
		{
			((t_uchar *)dest)[i] = ((t_uchar *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
			((t_uchar *)dest)[len] = ((t_uchar *)src)[len];
	}
	return (dest);
}
