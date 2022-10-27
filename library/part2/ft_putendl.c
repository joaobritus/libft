#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
	write(1, "\n", 1);
}

int	main()
{
	char *zas = "olarilala";
	ft_putendl(zas);
	return (0);
}
