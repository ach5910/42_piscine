/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:34:39 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/31 20:34:41 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_0_H
# define RUSH_0_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_printline(int x, char fst, char mid, char lst);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	**rush(int x, int y);

#endif
