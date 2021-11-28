/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:39:06 by illarion          #+#    #+#             */
/*   Updated: 2021/10/10 22:11:33 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned char	t_uchar;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_strncmp(const char	*str1, const char	*str2, size_t n);
void	ft_striteri(char	*str, void (*f)(unsigned int, char *));
size_t	ft_strlen(const char	*str);
size_t	ft_strlcpy(char	*dest, const char	*src, size_t size);
size_t	ft_strlcat(char	*dest, const char	*src, size_t size);
char	*ft_strchr(const char	*str, int symbol);
char	*ft_strrchr(const char	*str, int symbol);
char	*ft_strmapi(const char	*str, char (*f)(unsigned int, char));
char	*ft_strnstr(const char	*str, const char	*to_find, size_t len);
char	*ft_strjoin(const char	*str1, const char	*str2);
char	*ft_strtrim(const char	*str, const char	*set);
char	*ft_strdup(const char	*str);
char	*ft_substr(const char	*str, unsigned int start, size_t	len);

char	**ft_split(const char	*str, char symbol);

int		ft_tolower(int symbol);
int		ft_toupper(int symbol);

int		ft_isprint(int symbol);
int		ft_isascii(int symbol);
int		ft_isdigit(int symbol);
int		ft_isalpha(int symbol);
int		ft_isalnum(int symbol);

int		ft_memcmp(const void	*str1, const void	*str2, size_t n);
void	ft_bzero(void	*str, size_t n);
void	*ft_memset(void	*str, int symbol, size_t len);
void	*ft_memcpy(void	*dest, const void	*src, size_t n);
void	*ft_memccpy(void	*dest, const void	*src, int symbol, size_t n);
void	*ft_memmove(void	*dest, const void	*src, size_t len);
void	*ft_memchr(const void	*str, int symbol, size_t n);
void	*ft_calloc(size_t	count, size_t	size);

int		ft_atoi(const char	*str);

char	*ft_itoa(int number);

void	ft_putchar_fd(char symbol, int fd);
void	ft_putstr_fd(char	*str, int fd);
void	ft_putendl_fd(char	*str, int fd);
void	ft_putnbr_fd(int number, int fd);

int		ft_lstsize(t_list	*lst);
t_list	*ft_lstnew(void	*content);
t_list	*ft_lstlast(t_list	*lst);
t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *));
void	ft_lstadd_front(t_list	**lst, t_list	*new);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstdelone(t_list	*lst, void (*del)(void *));
void	ft_lstclear(t_list	**lst, void (*del)(void *));
void	ft_lstiter(t_list	*lst, void (*f)(void *));

#endif