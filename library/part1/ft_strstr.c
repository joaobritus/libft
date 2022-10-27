char *ft_strstr(char *haystack, const char *needle)
{
	int i = 0, y = 0, lneedle = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (*needle)
	{
		lneedle++;
	}

	while (haystack[i])
	{
		y = 0;
		while (needle[y])
		{
			if (haystack[i] == needle[y])
			{
				y++;
			}
			else
				break ;
		}
		if (y == lneedle)
			return (haystack + (i - y));
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char *a = "bananasplit";
	char *b = "anas";
	printf("%s", ft_strstr(a, b));
}
