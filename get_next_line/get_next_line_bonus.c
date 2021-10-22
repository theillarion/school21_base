/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:55:20 by glashli           #+#    #+#             */
/*   Updated: 2021/10/21 13:02:49 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_free_and_return(char	*argv_free, char	*argv_return)
{
	if (argv_free != NULL)
		free(argv_free);
	return (argv_return);
}

char	*ft_strdup(const char	*str)
{
	size_t	i;
	char	*new_str;

	i = 0;
	while (str[i])
		i++;
	new_str = (char *)malloc((i + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_read_full_file(int fd)
{
	char	*buff;
	char	*backup;
	char	*current;
	long	size_read;

	current = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (current == NULL)
		return (NULL);
	size_read = read(fd, current, BUFFER_SIZE);
	current[size_read] = '\0';
	if (size_read <= 0)
		return (ft_free_and_return(current, NULL));
	buff = NULL;
	buff = ft_strjoin(buff, current);
	while (size_read != 0)
	{
		size_read = read(fd, current, BUFFER_SIZE);
		current[size_read] = '\0';
		if (size_read <= 0 || current == NULL)
			return (ft_free_and_return(current, buff));
		backup = buff;
		buff = ft_strjoin(buff, current);
		free(backup);
	}
	return (ft_free_and_return(current, buff));
}

char	*get_next_line(int fd)
{
	static char		**buff[OPEN_MAX];
	static char		**backup[OPEN_MAX];
	char			*current;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	if (buff[fd] != NULL && buff[fd][0] != NULL && buff[fd][1] == NULL)
		free(backup[fd]);
	if (buff[fd] != NULL && *(buff)[fd] != NULL)
		buff[fd]++;
	if (buff[fd] == NULL)
	{
		current = ft_read_full_file(fd);
		if (current == NULL)
			return (NULL);
		buff[fd] = ft_split(current, '\n');
		backup[fd] = buff[fd];
		free(current);
	}
	if (buff[fd] != NULL && *(buff)[fd] != NULL)
		return (*(buff)[fd]);
	buff[fd] = NULL;
	return (NULL);
}
