/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:11:51 by hkalia            #+#    #+#             */
/*   Updated: 2016/07/25 15:11:53 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		a;
	int		*p;
	int		**pp;

	a = 100;
	p = &a;
	pp = &p;
	printf("a = %d\n", a);
	printf("address of a = %p\n", (void*)&a);
	printf("%c\n", '\n');

	printf("*p = %d\n", *p);
	printf("address pointed to by p = %p\n", p);
	printf("address of p = %p\n", (void*)&p);
	printf("%c\n", '\n');

	printf("**pp = %d\n", **pp);
	printf("address pointed to by pp = %p\n", pp);
	printf("address of pp = %p\n", (void*)&pp);
	printf("%c\n", '\n');

	return (0);
}
