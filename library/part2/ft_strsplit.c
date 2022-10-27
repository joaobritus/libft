char **ft_strplit(char const *s, char c)
{
	char **str;
	int i = 0;

	while (*s)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			**str++ = s[i];
			if (s[i + 1] == c)
			{
				**str = '\0';
				*str++;
			}
		}
		i++;
	}
	*str = '\0';
	return (str);
}
