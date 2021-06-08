/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 21:44:16 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 16:56:36 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet_old(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

/*
** This is how I would do it now
*/

void	ft_print_reverse_alphabet_new(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
