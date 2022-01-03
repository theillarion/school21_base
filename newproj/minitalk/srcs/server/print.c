#include "server.h"
#include "libft.h"

void	ft_print(char bit)
{
	static unsigned char	letter;
	static size_t			i;

	letter <<= 1;
	letter |= bit - 48;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(letter, 1);
		i = 0;
		letter = 0;
	}
}
