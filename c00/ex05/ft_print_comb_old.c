/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 09:19:56 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 16:58:12 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This was the first complex problem I had to solve with C
*/

static void	printer(char a, char b, char c)
{
	char	comma;
	char	space;

	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	comma = ',';
	space = ' ';
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb_old(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		printer(a, b, c);
		if (c <= '8')
			c++;
		else if (b <= '7')
		{
			b++;
			c = b + 1;
		}
		else
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}
