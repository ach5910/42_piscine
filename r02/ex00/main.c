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

int		main(void)
{
	t_node	*head;
	int		size;
	char	buf;
	char	*str;

	head = NULL;
	while (read(0, &buf, 1))
		add_node_end(&head, buf);
	size = ft_list_size(head);
	str = (char*)malloc(sizeof(char) * size);
	assign(str, head);
	ft_putstr(str);
	return (0);
}
