/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:37:45 by glashli           #+#    #+#             */
/*   Updated: 2021/10/13 22:16:05 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int symbol, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((t_uchar *)str)[i] = (t_uchar)symbol;
		i++;
	}
	return (str);
}
