/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:35:11 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/31 20:35:12 by hkalia           ###   ########.fr       */
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
		str[i] = ft_printline(x, 'A', 'B', 'C');
		i++;
		y--;
		while (y > 1)
		{
			str[i] = ft_printline(x, 'B', ' ', 'B');
			i++;
			y--;
		}
		if (y == 1)
			str[i] = ft_printline(x, 'A', 'B', 'C');
	}
	if (tmp != 1)
		i++;
	str[i] = 0;
	return (str);
}
