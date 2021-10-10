/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:37:45 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 00:21:05 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int symbol, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char *)str;
	while (i < len)
	{
		new_str[i] = (char)symbol;
		i++;
	}
	return (str);
}
