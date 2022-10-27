void	ft_memmove(void *dest, const void *src, size_t n)
{
	int i = 0;
	void *temp;

	while (i < n)
	{
		src[i] = temp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		temp[i] = dest[i];
		i++;
	}
	return (dest);
}
