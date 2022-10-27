char *ft_strtrum(char const *s)
{
	char *str;
	int i = 0;

	while (*s)
		i++;

	str = (char *)malloc(i + 1) * sizeof(char);
	if (!str)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != ' ' || *s != '\t' || *s != '\n')
		{
			str[i++] = s*;
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
