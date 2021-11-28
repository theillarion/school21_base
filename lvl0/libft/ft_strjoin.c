/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:18:11 by glashli           #+#    #+#             */
/*   Updated: 2021/10/09 20:11:29 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_safe(const char	*str)
{
	size_t	i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char	*str1, const char	*str2)
{
	size_t	i;
	size_t	length_str1;
	size_t	length_str2;
	char	*new_str;

	length_str1 = ft_strlen_safe(str1);
	length_str2 = ft_strlen_safe(str2);
	if ((str1 == NULL && str2 == NULL))
		return (NULL);
	new_str = (char *)malloc((length_str1 + length_str2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < length_str1 && str1[i])
	{
		new_str[i] = str1[i];
		i++;
	}
	while (i < length_str1 + length_str2 && str2[i - length_str1])
	{
		new_str[i] = str2[i - length_str1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
