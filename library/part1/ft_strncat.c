char	*strncat(char *dest, const char *src, size_t n)
{
	unsigned int i, y = 0;

	while (*dest)
		i++;
	while (*src && y < n)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
