/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 17:10:05 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 17:17:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char n)
{
	write(1, &n, 1);
}

static void	ft_print_num(int num1, int num2)
{
	ft_putchar('0' + num1 / 10);
	ft_putchar('0' + num1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + num2 / 10);
	ft_putchar('0' + num2 % 10);
	if (!(num1 == 98 && num2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (!(num1 == 98 && num2 == 99))
	{
		if (num2 <= 98)
		{
			num2++;
		}
		else
		{
			num1++;
			num2 = num1 + 1;
		}
		ft_print_num(num1, num2);
	}
}
