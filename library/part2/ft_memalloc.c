void	*ft_memalloc(size_t size)
{
	int *zas;

	zas = (int*)malloc(size * sizeof(int));
	if (zas == NULL)
		return (0);
	zas[0] = 0;
	return (zas);
}
