/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:23:15 by glashli           #+#    #+#             */
/*   Updated: 2021/10/20 15:00:00 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

static size_t	ft_get_count_lines(const char	*str, char symbol)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == symbol)
			count++;
		i++;
	}
	count++;
	return (count);
}

static char	**ft_get_strs(char	**new_str, const char	*str,
	size_t count, char symbol)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	m;

	k = 0;
	i = 0;
	while (k < count && str[i])
	{
		j = i;
		while (str[j] && str[j] != symbol)
			j++;
		new_str[k] = (char *)malloc((j - i + 2) * sizeof(char));
		if (new_str[k] == NULL)
			return (NULL);
		m = 0;
		while (i <= j)
			new_str[k][m++] = str[i++];
		new_str[k++][m] = '\0';
	}
	new_str[k] = NULL;
	return (new_str);
}

char	**ft_split(const char *str, char symbol)
{
	size_t	count;
	size_t	i;
	char	**new_str;

	i = 0;
	count = ft_get_count_lines(str, symbol);
	if (count == 0)
	{
		new_str = (char **)malloc(1 * sizeof(char *));
		new_str[0] = NULL;
		return (new_str);
	}
	new_str = (char **)malloc((count + 1) * sizeof(char *));
	if (new_str == NULL)
		return (NULL);
	new_str = ft_get_strs(new_str, str, count, symbol);
	if (new_str == NULL)
	{
		while (i < count && new_str[i])
			free(new_str[i++]);
		free(new_str);
		return (NULL);
	}
	return (new_str);
}
