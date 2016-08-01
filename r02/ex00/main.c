#include "rush_2.h"

int		find_x(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\n')
		x++;
	return (x);
}

int		find_y(char *str)
{
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
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

void	call_rush(char *str)
{
	int		x;
	int		y;

	x = find_x(str);
	y = find_y(str);
	if ((ft_strcmp(str, convert(rush00(x, y)))) == 0)
		ft_putstr("Great SUCCESS 00");
	if ((ft_strcmp(str, convert(rush01(x, y)))) == 0)
		ft_putstr("Great SUCCESS 01");
	if ((ft_strcmp(str, convert(rush02(x, y)))) == 0)
		ft_putstr("Great SUCCESS 02");
	if ((ft_strcmp(str, convert(rush03(x, y)))) == 0)
		ft_putstr("Great SUCCESS 03");
	if ((ft_strcmp(str, convert(rush04(x, y)))) == 0)
		ft_putstr("Great SUCCESS 04");

}

int		main(void)
{
	t_node	*head;
	char	buf;
	char	*str;

	head = NULL;
	while (read(0, &buf, 1))
		add_node_end(&head, buf);
	str = (char*)malloc(sizeof(char) * ft_list_size(head) + 1);
	assign(str, head);
	clear_list(&head);
	call_rush(str);
	return (0);
}
