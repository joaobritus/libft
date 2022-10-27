char	*ft_strchr(const char *s, int c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] = c)
			return (*s + c);
	}
	return (NULL);
}
