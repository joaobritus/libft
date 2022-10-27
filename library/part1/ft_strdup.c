size_t ft_strlen(const char *s)
{
	int i = 0;

	while (*s)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int i = 0;
	char *zas;

	zas = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (zas == NULL)
		return (0);

	while (*s)
	{
		zas[i] = s[i];
		i++:
	}
	zas[i] = '\0';
	return (zas);
}
