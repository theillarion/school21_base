/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:03:07 by glashli           #+#    #+#             */
/*   Updated: 2021/10/10 16:30:16 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int symbol)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)symbol)
			return (&((char *)str)[i]);
		i--;
	}
	return (NULL);
}
