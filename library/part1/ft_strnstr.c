char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int i = 0, y = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i])
	{
		y = 0;
		while (needle[y])
		{
			if (haystack[i] == needle[y] && y < n)
			{
				y++;
			}
			else
				break ;
			if (y == n)
			{
				return (haystack + (i - n));
			}
		}
		i++;
	}
	return (0);
}
