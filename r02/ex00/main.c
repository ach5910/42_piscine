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
#include <stdio.h>

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

int		main(void)
{
	t_node	*head;
	char	buf;
	char	*str;
	int		x;
	int		y;

	head = NULL;
	while (read(0, &buf, 1))
		add_node_end(&head, buf);
	str = (char*)malloc(sizeof(char) * ft_list_size(head));
	assign(str, head);
	x = find_x(str);
	y = find_y(str);
	printf("%d\n", x);
	printf("%d\n", y);
	ft_putstr(str);
	return (0);
}
