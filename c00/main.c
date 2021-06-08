/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:12:41 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/05/26 17:18:52 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This file wasn't meant to be submitted in the assignment,
** but you can use the program to test the exercises.
*/

void	ft_putchar(char c);

void	ft_print_alphabet_old(void);
void	ft_print_alphabet_new(void);

void	ft_print_reverse_alphabet_old(void);
void	ft_print_reverse_alphabet_new(void);

void	ft_print_numbers(void);

void	ft_is_negative(int n);

void	ft_print_comb_new(void);
void	ft_print_comb_old(void);

void	ft_print_comb2(void);

void	ft_putnbr(int nb);

int main()
{
	ft_putchar('a');					// ex00
	ft_putchar("\n");

	ft_putchar("\n");

	ft_print_alphabet_old();			// ex01
	ft_putchar("\n");
	ft_print_alphabet_new();
	ft_putchar("\n");

	ft_putchar("\n");

	ft_print_reverse_alphabet_old();	// ex02
	ft_putchar("\n");
	ft_print_reverse_alphabet_new();
	ft_putchar("\n");

	ft_putchar("\n");

	ft_print_numbers();					// ex03

	ft_putchar("\n");

	ft_is_negative(974023);				// ex04
	ft_putchar("\n");
	ft_is_negative(0);
	ft_putchar("\n");
	ft_is_negative(-4023);
	ft_putchar("\n");

	ft_putchar("\n");

	ft_print_comb_old();				// ex05
	ft_print_comb_new();

	ft_putchar("\n");

	ft_print_comb2();					// ex06

	return (0);
}
