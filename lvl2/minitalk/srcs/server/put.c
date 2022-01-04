#include "server.h"

void	ft_putchar_fd(char symbol, int fd)
{
	write(fd, &symbol, 1);
}

void	ft_putendl_fd(char	*str, int fd)
{
	if (str != NULL)
	{
		write(fd, str, ft_strlen(str));
		write(fd, "\n", 1);
	}
}
