int	ft_isalnum(int a)
{
	if ((a >= 48 && a <= 57) || (a >= 'a' && a <= 'z') || (a <= 'Z' && a >= 'A'))
		return (1);
	return (0);
}

