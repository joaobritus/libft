int	ft_strlen(char *a)
{
	int i = 0, y = 0;

	while (*a)
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int i = 0;
	char *zas;

	zas = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

	if (!zas)
		return (0);

	while (*s1)
		i++;
	while (*s2)
	{
		s1[i] = s2[y];
		i++;
		y++;
	}
	s1[i] = '\0';

	i = 0;
	while (*s1)
	{
		zas[i] = s1[i];
		i++;
	}
	zas[i] = '\0';
	return (zas);
}
