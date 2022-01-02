#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

pid_t pid;

void ft_send_data(char	*str)
{
	if (length(str) == 0)
		exit(EXIT_FAILURE);
	while (str++)
	{
		while (*str >> 1)
		{

		}
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