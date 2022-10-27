int ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i = 0;
	unsigned char a;
	unsigned char b;

	while (s1[i])
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
		{
			return (a - b);
		}
		i++;
	}
	a = s1[i];
	b = s2[i];
	return (a - b);
}
