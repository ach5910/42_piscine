/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:35:37 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/31 20:35:39 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_0.h"

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
