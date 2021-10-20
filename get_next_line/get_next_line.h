/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:23:19 by glashli           #+#    #+#             */
/*   Updated: 2021/10/20 16:33:42 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stddef.h>
# include <limits.h>

typedef unsigned char	t_uchar;

char	*get_next_line(int fd);
char	*ft_strdup(const char	*str);
char	*ft_strjoin(const char	*str1, const char	*str2);
char	**ft_split(const char *str, char symbol);

#endif