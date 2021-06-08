/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:28:00 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 17:30:23 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
** This is how I would do it now
*/

void	ft_putstr(char *str)
{
	write(1, &c, 1);
}

void	ft_putnbr_p(int nb)
{
	int multiplier;
	int nb2;

	while (nb > 10)
	{
		nb2 = nb;
		multiplier = 1;
		while (nb2 > 10)
		{
			multiplier *= 10;
			nb2 /= 10;
		}
		ft_putchar(nb / multiplier + '0');
		nb = nb % multiplier;
	}
	ft_putchar(nb + '0');
}

void	ft_putnbr_old(int nb)
{
	unsigned int u_nb;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_p(2);
		ft_putnbr_p(147483648);
	}
	else if (nb >= 0)
	{
		ft_putnbr_p(nb);
	}
	else
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr_p(nb);
	}
}
