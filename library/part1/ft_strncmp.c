int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i = 0;
	unsigned char a;
	unsigned char b;

	while (s1[i] && s2[i] && i < n)
	{
		a = s1[i];
		b = s2[i];
		if (s1[i] != s2[i])
		{
			return (a - b);
		}
		i++;
	}
	a = s1[i];
	b = s2[i];
	return (a - b);
}
