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
void				ft_putstr(char *str);
int					ft_strcmp(char *s1, char *s2);
char				*ft_printline(int x, char fst, char mid, char lst);
t_node				*create_new_node(char c);
void				add_node_end(t_node **head, char c);
int					ft_list_size(t_node *head);
void				assign(char *str, t_node *head);
void				clear_list(t_node **head);
char				**rush00(int x, int y);
char				**rush01(int x, int y);
char				**rush02(int x, int y);
char				**rush03(int x, int y);
char				**rush04(int x, int y);
int					find_x(char *str);
int					find_y(char *str);
int					find_size(char **str);
char				*convert(char **str);
void				call_rush(char *str);

#endif
