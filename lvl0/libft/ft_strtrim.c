/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:13:56 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 13:52:45 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char	*str, const char	*set)
{
	int		i;
	int		start;
	int		end;
	char	*new_str;

	if (str == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr((char *)set, str[i]) != NULL && str[i])
		i++;
	start = i;
	i = ft_strlen(str);
	if (start >= i)
		return (ft_substr("\0", 0, 1));
	i--;
	while (ft_strchr((char *)set, str[i]) != NULL && i >= 0)
		i--;
	end = i + 1;
	if (start >= end)
		return (ft_substr("\0", 0, 1));
	new_str = ft_substr(str, start, end - start);
	return (new_str);
}
