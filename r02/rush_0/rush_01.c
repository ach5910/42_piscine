/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:34:49 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/31 20:34:51 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"

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
		str[i] = ft_printline(x, '/', '*', '\\');
		i++;
		y--;
		while (y > 1)
		{
			str[i] = ft_printline(x, '*', ' ', '*');
			i++;
			y--;
		}
		if (y == 1)
			str[i] = ft_printline(x, '\\', '*', '/');
	}
	if (tmp != 1)
		i++;
	str[i] = 0;
	return (str);
}
