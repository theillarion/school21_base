size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	ft_swap_char(char	*symbol1, char	*symbol2)
{
	char	backup;

	backup = *symbol1;
	*symbol1 = *symbol2;
	*symbol2 = backup;
}

static char	*ft_reverse(char	*str)
{
	size_t	i;
	size_t	j;

	if (str == NULL)
		j = 0;
	else
		j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
		ft_swap_char(&str[i++], &str[j--]);
	return (str);
}

char	*ft_base_to(long number, char	*base)
{
	char	result[60];
	int		sign;
	int		base_int;
	size_t	i;

	base_int = ft_strlen(base);
	sign = 1;
	if (number < 0)
		sign = -1;
	i = 0;
	while (number != 0)
	{
		result[i++] = base[number % base_int];
		number /= 10;
	}
	if (sign == -1)
		result[i++] = '-';
	result[i] = '\0';
	return (ft_reverse(result));
}
