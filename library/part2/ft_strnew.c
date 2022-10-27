char	*ft_strnew(size_t size)
{
	char *zas;
	int i = 0;

	zas = (char*)malloc(size * sizeof(char));
	if (zas == NULL)
		return (0);
	while (zas[i])
	{
		zas[i] = '\0';
		i++;
	}
	return (zas);
}
