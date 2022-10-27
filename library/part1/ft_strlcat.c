unsigned int ft_strlen(char *str)
{
	int i = 0;

	while (*str)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, size_t n)
{
	int i, y = 0;

	while (*dest)
		y++;

	if (n == 0 || n < y)
		return (n + ft_strlen(src));

	while (*src && i < n - y - 1)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
