/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 15:30:22 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/30 15:30:24 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

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
	if ((ft_strcmp(str, convert(rush(x, y)))) == 0)
		ft_putstr("SUCCESS");
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