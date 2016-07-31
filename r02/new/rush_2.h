/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:08:08 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/30 20:08:10 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_node
{
	char			data;
	struct s_node	*next;
}					t_node;

void				ft_putchar(char c);
t_node				*create_new_node(char c);
void				add_node_end(t_node **head, char c);
int					ft_list_size(t_node *head);
void				assign(char *str, t_node *head);
void				ft_putstr(char *str);
void				clear_list(t_node **head);
int					ft_strcmp(char *s1, char *s2);

#endif
