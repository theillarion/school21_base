/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:49:07 by glashli           #+#    #+#             */
/*   Updated: 2021/10/07 23:49:29 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*str1, const void	*str2, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((t_uchar *)str1)[i] != ((t_uchar *)str2)[i])
			return (((t_uchar *)str1)[i] - ((t_uchar *)str2)[i]);
		i++;
	}
	return (0);
}
