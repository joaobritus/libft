char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i = 0;

	while (*src && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
