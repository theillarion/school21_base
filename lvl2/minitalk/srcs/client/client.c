#include "client.h"

int	main(int argc, char	**argv)
{
	pid_t	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid == 0)
			exit(EXIT_FAILURE);
		ft_send_data(pid, argv[2]);
		exit(EXIT_SUCCESS);
	}
	else	
		exit(EXIT_FAILURE);
}
