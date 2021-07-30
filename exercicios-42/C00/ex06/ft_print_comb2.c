/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:52:20 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/30 01:48:55 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	caracter;
	int		posicao1;
	int		posicao2;
//00 01, 00 02 ... 98 99
	posicao1 = 0;
	posicao2 = 2;
	// write(1, "00 01", 5);
	// 00 01, 67 89
	while (posicao1 < 30 && posicao2 < 30)
	{
		write(1, ", ", 2);
		// caracter = posicao1 / 10 + '0';
		// ft_putchar(caracter);
		// //1
		// caracter = posicao1 % 10 + '0';
		// ft_putchar(caracter);
		// // 5
		// write(1, " ", 1);

		
		// caracter = posicao2 / 10 + '0';
		// ft_putchar(caracter);

		// caracter = posicao2 % 10 + '0';
		// ft_putchar(caracter);

		printf("%i", posicao2);
		++posicao2;

		if (posicao2 == 100)
		{
			posicao2 = ++posicao1 + 1;
		}
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


int main(void)
{
	ft_print_comb2();

	return (0);
}