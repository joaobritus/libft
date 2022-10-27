int	ft_atoi(const char *str)
{
	int i = 0;
	int signal = 1;
	int number = 0;

	while (str[i] <= 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			signal *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (signal * number);
}
