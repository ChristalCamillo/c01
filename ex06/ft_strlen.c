int	ft_strlen(char *str)
{
	char	*charptr;
	int		operator;

	charptr = str;
	operator = 0;
	while (*charptr != 0)
	{
		operator++;
		charptr++;
	}
	return (operator);
}
