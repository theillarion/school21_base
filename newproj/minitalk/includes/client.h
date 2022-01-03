#ifndef CLIENT_H
# define CLIENT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

void	ft_send_data(pid_t pid, char	*str);
int		main(int argc, char	**argv);

#endif