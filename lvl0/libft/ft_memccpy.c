/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:50:31 by glashli           #+#    #+#             */
/*   Updated: 2021/10/07 23:51:10 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void	*dest, const void	*src, int symbol, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((t_uchar *)dest)[i] = ((t_uchar *)src)[i];
		i++;
		if (((t_uchar *)src)[i - 1] == (t_uchar)symbol)
			return (&((t_uchar *)dest)[i]);
	}
	return (NULL);
}
