#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void ft_print()
{
	printf("GG\n");
	signal(SIGUSR1, ft_print);
	pause();
}

void        sighandler(int signum)
{
  static int    ascii = 0;
  static int    power = 0;

  if (signum == SIGUSR1)
    ascii += 1 << (7 - power);
  if ((power += 1) == 8)
    {
      putchar(ascii);
      power = 0;
      ascii = 0;
    }
}

int	main(void)
{
	printf("PID program: %d\n", getpid());
	signal(SIGUSR1, sighandler);
	pause();
}