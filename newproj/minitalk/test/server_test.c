#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void	print()
{
	printf("GG");
}

int main()
{
	struct sigaction action;

	printf("PID: %d\n", getpid());
	action.sa_handler = print;
	sigemptyset(&action.sa_mask);
	action.sa_flags = 0;

	sigaction(SIGUSR1, &action, 0);
	sigaction(SIGUSR2, &action, 0);

	pause();
	exit(1);
}