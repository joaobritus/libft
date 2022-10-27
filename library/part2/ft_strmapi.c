char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i = 0;
	char *zas;

	while (s[i])
		i++;
	zas = (char *)malloc((i + 1) * sizeof(char));
	if (!zas)
		return (0);

	i = 0;
	while (s[i])
	{
		zas[i] = f(i, s[i]);
		i++;
	}
	zas[i] = '\0';
	return (zas);
}
