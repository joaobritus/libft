void	*memset(void *s, int c, size_t n)
{
	s = malloc(n * sizeof(int));
	if (s == NULL)
		return(0);
	int i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

			
