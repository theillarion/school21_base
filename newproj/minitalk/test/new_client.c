#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
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

int	main(int argc, char	**argv)
{
	if (argc == 3)
	{
		pid = atoi(argv[1]);
		if (pid == 0)
			exit(EXIT_FAILURE);
		ft_send_data(argv[2]);
	}
	exit(EXIT_SUCCESS);
}