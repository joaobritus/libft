void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] == c)
		{
			return (*dest + i + 1);
		}
		dest[i] = src[i];
		i++;
	}
	return (NULL);
}
