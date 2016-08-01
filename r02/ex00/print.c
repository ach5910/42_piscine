#include "rush_2.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

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
