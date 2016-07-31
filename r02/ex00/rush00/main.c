#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**rush(int x, int y);

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

int		ft_atoi(char *str)
{
	int		i;
	int		negativ;
	int		number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		negativ = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}

int		find_size(char **str)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\n')
		{
			j++;
			k++;
		}
		k++;
		i++;
	}
	return (k);
}

char	*convert(char **str)
{
	char	*str1;
	int		i;
	int		j;
	int		k;

	str1 = (char*)malloc(sizeof(char) * find_size(str) + 1);
	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\n')
		{
			str1[k] = str[i][j];
			j++;
			k++;
		}
		str1[k] = '\n';
		k++;
		i++;
	}
	return (str1);
}

int		main(int argc, char **argv)
{
	char	**str;
	int		i;

	str = NULL;
	if (argc != 3)
		write(1, "Error\n", 7);
	else
	{
		str = rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		i = 0;
		ft_putstr(convert(str));
	}
	return (0);
}
