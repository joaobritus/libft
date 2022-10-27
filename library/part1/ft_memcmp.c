int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i = 0;

	while (i < n)
	{
		if (s1 == s2)
		{
			return (s1 - s2);
		}
		i++;
	}
}
