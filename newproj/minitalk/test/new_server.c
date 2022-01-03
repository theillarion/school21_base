#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

static char byte[9];

int ft_pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

char	ft_byte_to_char(char	*str)
{
	char	result;
	int length;
	int i;
	
	result = 0;
	length = strlen(str);
	i = 0;
	if (length == 0 || length > 8)
		exit(EXIT_FAILURE);
	while (i < length)
	{
		result <<= 1;
		result |= str[i] - 48;
		i++;		
	}
	return (result);
}

void add_to_end(char symbol)
{
	static int i = 0;
	
	byte[i] = symbol;
	if (i == 7)
	{
		byte[i] = symbol;
		char symbol2 = ft_byte_to_char(byte);
		write(1, &symbol2, 1);
		i = 0;
		memset(&byte, 0, 8);
	}
	else
		i++;
}

void one()
{
	add_to_end('1');
}

void zero()
{
	add_to_end('0');
}

int	main(void)
{
	struct sigaction	action_one;
	struct sigaction	action_zero;
	sigset_t	set;

	printf("PID: %d\n", getpid());
	
	memset(&action_one, 0, sizeof(action_one));
	memset(&action_zero, 0, sizeof(action_zero));
	memset(&byte, 0, sizeof(byte));

	action_one.sa_handler = one;
	action_zero.sa_handler = zero;
	
	sigemptyset(&action_one.sa_mask);
	sigemptyset(&action_zero.sa_mask);

	sigaddset(&set, SIGUSR1);
	sigaddset(&set, SIGUSR2);

	sigaction(SIGUSR1, &action_one, NULL);
	sigaction(SIGUSR2, &action_zero, NULL);	
	
	while(1)	
		pause();

	exit(EXIT_SUCCESS);
}