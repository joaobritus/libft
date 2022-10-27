int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i = 0;

	while (*s1 && i < n)
	{
		if (s1 == s2)
			i++;
		else
			return (0);
	}
	return (1);
}
