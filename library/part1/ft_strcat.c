char	*ft_strcat(char *dest, const char *src)
{
	int i, y = 0;

	while (*dest)
		i++;
	while (*src)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
