/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:35:59 by glashli           #+#    #+#             */
/*   Updated: 2021/10/09 20:15:27 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char	*str, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (new_str);
	i = 0;
	if (start < ft_strlen(str))
	{
		while (i < len && str[start + i])
		{
			new_str[i] = str[start + i];
			i++;
		}
	}	
	new_str[i] = '\0';
	return (new_str);
}
