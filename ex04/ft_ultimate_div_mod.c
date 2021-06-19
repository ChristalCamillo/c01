void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rest;

	rest = *a % *b;
	*a = *a / *b;
	*b = rest;
}
