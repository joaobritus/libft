char *ft_strmap(char const *s, char (*f)(char))
{
	int i = 0:
	char *zas;

	while (s[i])
	{
		f(s)
			i++;
	}
	zas = (char *)malloc((i + 1) * sizeof(char));
	if (!zas)
		return (0);

	i = 0;
	while (s[i])
	{
		zas[i] = f(s[i]);
		i++;
	}
	zas[i] = '\0';
	return (zas);
}
