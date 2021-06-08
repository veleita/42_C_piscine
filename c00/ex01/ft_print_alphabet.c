/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:20:57 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 16:56:01 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This is the very first while loop I wrote in C
*/

void	ft_print_alphabet_old(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

/*
** This is how I would do it now
*/

void	ft_print_alphabet_new(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
