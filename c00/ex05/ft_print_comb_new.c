/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:08:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 16:55:16 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This is how I would do it now
*/

static void	printer(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb_new(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	printer(a, b, c);
	while (a <= '7')
	{
		if (c < '9')
			c++;
		else if (b < '8')
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
		printer(a, b, c);
	}
}
