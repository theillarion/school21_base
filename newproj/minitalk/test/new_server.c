#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void one()
{
	write(1, "1", 1);
}

void zero()
{
	write(1, "0", 1);
}

int	main(void)
{
	struct sigaction	action_one;
	struct sigaction	action_zero;
	sigset_t	set;

	printf("PID: %d\n", getpid());
	memset(&action_one, 0, sizeof(action_one));
	action_one.sa_handler = one;
	sigemptyset(&action_zero.sa_mask);
	sigaction(SIGUSR1, &action_one, NULL);

	memset(&action_zero, 0, sizeof(action_zero));
	action_zero.sa_handler = zero;
	sigemptyset(&action_zero.sa_mask);
	sigaction(SIGUSR2, &action_zero, NULL);	
	
	while(1)
	{
		sigaddset(&set, SIGUSR1);
		sigaddset(&set, SIGUSR2);
		sigemptyset(&set);
		pause();
	}
	exit(EXIT_SUCCESS);
}