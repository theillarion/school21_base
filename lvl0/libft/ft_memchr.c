/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:47:36 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 00:22:16 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*str, int symbol, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((t_uchar *)str)[i] == (t_uchar)symbol)
			return (&((t_uchar *)str)[i]);
		i++;
	}
	return (NULL);
}
