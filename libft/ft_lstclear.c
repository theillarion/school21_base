/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:45:44 by glashli           #+#    #+#             */
/*   Updated: 2021/10/10 22:09:31 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*backup;

	while ((*lst) != NULL)
	{
		backup = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		(*lst) = backup;
	}
}
