#include "client.h"
#include "libft.h"

void	ft_send_data(pid_t pid, char	*str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0)
		exit(EXIT_FAILURE);
	while (str[i])
	{
		int	j = 128;
		while (j)
		{
			if (j & str[i])
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j /= 2;
		}
		i++;
	} 
}
