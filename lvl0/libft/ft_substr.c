/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:35:59 by glashli           #+#    #+#             */
/*   Updated: 2021/10/13 23:40:04 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char	*str, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;
	size_t	size;

	if (str == NULL)
		return (NULL);
	size = len;
	if (start >= ft_strlen(str))
		size = 0;
	if (len > ft_strlen(str) - start)
		size = ft_strlen(str) - start;
	new_str = (char *)malloc((size + 1) * sizeof(char));
	if (new_str == NULL)
		return (new_str);
	i = 0;
	if (start < ft_strlen(str))
	{
		while (i < len && str[start + i])
		{
			new_str[i] = str[i + start];
			i++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
