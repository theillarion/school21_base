#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
				write(1, "1", 1);
			else
				write(1, "0", 1);
			j /= 2;
		}
		i++;
	} 
}

int	main(int argc, char	**argv)
{
	ft_send_data("G");
	/*if (argc == 2)
	{
		ft_send_data(argv[1]);		
	}*/
	exit(EXIT_SUCCESS);
}