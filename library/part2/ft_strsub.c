char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char const *zas;
	int i = 0;

	zas = (char const *)malloc(len * sizeof(char));

	if (!zas)
		return (0);
	while (i < len)
	{
		zas[start + i] = s[i];
		i++;
	}
	zas[start + i] = '\0';
	return (zas);
}
