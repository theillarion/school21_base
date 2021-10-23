/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <glashli@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:04:52 by glashli           #+#    #+#             */
/*   Updated: 2021/10/24 02:42:44 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define INT_ARGV "cdiu"
# define HEX_ARGV "xX"

size_t	ft_strlen(const char	*str);
size_t	ft_get_discharges(size_t number);
void	ft_swap_char(char	*symbol1, char	*symbol2);
char	*ft_reverse(char	*str);

void	ft_putchar_fd(char symbol, int fd);
void	ft_putstr_fd(char	*str, int fd);
void	ft_putlnbr_fd(long number, int fd);

int		ft_process_number_hex(const char format, va_list argv);
int		ft_process_number_dec(const char format, va_list argv);
int		ft_process_address(va_list argv);
int		ft_process_string(va_list argv);

char	*ft_convert_to_base(long number, char	*base);

int		ft_switch_parser(va_list argv, const char	format)
int		ft_parser(va_list argv, const char	*format);

int		printf(const char	*format, ...);

#endif