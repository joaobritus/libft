#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char zas = n + 48;
	write(fd, &zas, 1);
}//nao esta terminado
