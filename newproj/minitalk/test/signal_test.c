#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_exit()
{
    printf("\nExit\n");
    //kill(pid, SIGINT);
	exit(1);
}

int main(void)
{
	printf("\nPID: %d\n", getpid());
    signal(SIGINT, ft_exit);
    pause();
    return (0);
}