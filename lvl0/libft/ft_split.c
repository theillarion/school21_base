/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:56:55 by glashli           #+#    #+#             */
/*   Updated: 2021/10/10 16:26:59 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_count_lines(const char	*str, char symbol)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i] && str[i] == symbol)
		i++;
	while (str[i])
	{
		if (str[i] == symbol && str[i - 1] != symbol)
			count++;
		i++;
	}
	if (str[i - 1] != symbol)
		count++;
	return (count);
}

static size_t	ft_skip_symbol(const char	*str, char symbol, size_t i)
{
	while (str[i] && str[i] == symbol)
		i++;
	return (i);
}

static char	**ft_get_strs(char	**new_str, const char	*str,
	size_t count, char symbol)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	m;

	i = 0;
	k = 0;
	i = ft_skip_symbol(str, symbol, i);
	while (k < count && str[i])
	{
		j = i;
		while (str[j] && str[j] != symbol)
			j++;
		new_str[k] = (char *)malloc((j - i + 1) * sizeof(char));
		if (new_str[k] == NULL)
			return (NULL);
		m = 0;
		while (i < j)
			new_str[k][m++] = str[i++];
		new_str[k][m] = '\0';
		i = ft_skip_symbol(str, symbol, i);
		k++;
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
