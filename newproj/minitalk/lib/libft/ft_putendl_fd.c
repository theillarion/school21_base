/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:55:32 by glashli           #+#    #+#             */
/*   Updated: 2021/10/08 00:20:45 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char	*str, int fd)
{
	if (str != NULL)
	{
		write(fd, str, ft_strlen(str));
		write(fd, "\n", 1);
	}
}
