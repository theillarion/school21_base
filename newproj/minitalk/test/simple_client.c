#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char	**argv)
{
	if (argc == 3)
	{
		int pid;

		pid = atoi(argv[1]);
		kill((pid_t)pid, SIGUSR1);
	}
	exit(1);
}