#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int n)
{
	if (n >= -2147483648 && n <= 2147483647)
	{
		if (n == -2147483648)
			write(1, "-2147483648", 11);
		else if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putchar((n % 10) + 48);
		}
		else if (n >= 0) 
			ft_putchar(n + 48);
	}
}

int	main()
{
	int zas = 24;
	int zus = 0;
	int zes = -243;
	int zis = 2147483647;
	int zos = -2147483648;

	ft_putnbr(zas);
	write(1, "\n", 1);
	ft_putnbr(zus);
	write(1, "\n", 1);
	ft_putnbr(zes);
	write(1, "\n", 1);
	ft_putnbr(zis);
	write(1, "\n", 1);
	ft_putnbr(zos);
	write(1, "\n", 1);
}
