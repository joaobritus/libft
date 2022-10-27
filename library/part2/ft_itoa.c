int xupamos(int n)
{
	int len = 0;

	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char *ft_itoa(int n)
{
	int i = xupamos(n);
	char *zas;

	zas = (char*)malloc((i + 1) * sizeof(char));
	if (!zas)
		return (0);
	zas[i--] = '\0';
	if (n == 0)
	{
		zas[0] = 48;
	}
	if (n < 0)
	{
		zas[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		zas[i] = n % 10;
		n = n / 10;
		i--;
	}
	return (zas);
}
