/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:01:18 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/06/08 19:30:00 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* I didn't manage to finish this exercise in the Piscine, so I'll do it now */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_ipow(const int i, int power)
{
	int ret;

	ret = i;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		ret *= ret;
		power--;
	}
	return (ret);
}

void init_mask(bool *mask)
{
	int i;

	i = 0;
	while (i < 10)
	{
		mask[i] = false;
		i++;
	}
}

/* 
** For numbers of n digits, each decimal digit (0 - 9) will appear 10^n-1 times
** That is, 1 time each for 1 digit numbers, 10 times each for 2 digit numbers,
** and so on
*/

void ft_print_combn(int n)
{
	int iters;
	bool mask[10];

	iters = ft_ipow(10, n);
	while (iters > 0)
	{
		init_mask(mask);
		while (i < n)
		{
			ft_putchar('0' + i);
			i++;
		}
		iters--;
	}
	char	tab[n];
	int		diez;
	int		nmax;
	int		nmin;

	diez = ;
	while(0 < n)
	{
		diez *= 10;
		n--;
	}
	nmax = diez - 1;
	nmin = 0;



	while(nmin < nmax)
	{
		ft_putchar(48 + nmin);
		nmin++;
	}
}

int		main()
{
	ft_print_combn(4);
	return(0);
}


