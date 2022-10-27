int	ft_strequ(char const *s1, char const *s2)
{
	int i = 0;

	while (*s1)
	{
		if (s1 == s2)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

	
