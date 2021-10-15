/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:59:12 by glashli           #+#    #+#             */
/*   Updated: 2021/10/15 12:24:55 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char	*str, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;
	size_t	length;

	length = 0;
	if (str != NULL)
		length = ft_strlen(str);
	i = 0;
	new_str = (char *)malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (i < length)
	{
		new_str[i] = (*f)((unsigned int)i, str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
