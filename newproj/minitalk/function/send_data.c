#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>

pid_t pid;

void ft_send_data(char	*str)
{
	int	i;

	i = 0;
	if (strlen(str) == 0)
		exit(EXIT_FAILURE);
	while (str[i])
	{
		int	j = 128;
		while (j)
		{
			if (j & *str)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j /= 2;
		}
		i++;
	} 
}