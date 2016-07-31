char	*ft_printline(int x, char fst, char mid, char lst)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(char) * (x + 1));
	i = 0;
	str[i] = fst;
	i++;
	x--;
	while (x > 1)
	{
		str[i] = mid;
		i++;
		x--;
	}
	if (x == 1)
	{
		str[i] = lst;
		i++;
	}
	str[i] = 10;
	return (str);
}

char	**rush(int x, int y)
{
	char	**str;
	int		tmp;
	int		i;

	tmp = y;
	str = (char**)malloc(sizeof(char*) * (y + 1));
	i = 0;
	if (x > 0 && y > 0)
	{
		str[i] = ft_printline(x, 'o', '-', 'o');
		i++;
		y--;
		while (y > 1)
		{
			str[i] = ft_printline(x, '|', ' ', '|');
			i++;
			y--;
		}
		if (y == 1)
			str[i] = ft_printline(x, 'o', '-', 'o');
	}
	if (tmp != 1)
		i++;
	str[i] = 0;
	return (str);
}
