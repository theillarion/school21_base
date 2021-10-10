/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:59 by glashli           #+#    #+#             */
/*   Updated: 2021/10/09 18:23:36 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char	*to_find, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (i < len && str[i] && str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(to_find))
			return ((char *)&str[i - j]);
		i = i + 1 - j;
	}
	return (NULL);
}
