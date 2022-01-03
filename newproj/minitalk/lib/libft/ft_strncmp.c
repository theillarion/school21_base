/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:37:53 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 00:01:11 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*str1, const char	*str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n && (str1[i] || str2[i]))
	{
		if ((t_uchar)str1[i] != (t_uchar)str2[i])
			return ((t_uchar)str1[i] - (t_uchar)str2[i]);
		i++;
	}
	return (0);
}
