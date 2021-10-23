#include "libftprintf.h"

int	ft_printf(const char	*format, ...)
{
	va_list	argv;
	int		count;

	va_start(argv, format);
	count = ft_parser(argv, format);
	va_end(argv);
	return (count);
}
