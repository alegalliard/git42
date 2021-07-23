/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justificativa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:52:20 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/21 00:57:17 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c); //prototipei a função aqui pra ela ficar acessível de qualquer lugar do documento

void	ft_print_comb2(void)
{
	char	caracter;
	int		posicao1; //números da posição 1
	int		posicao2; //números da posição 2

	posicao1 = 0;
	posicao2 = 2;
	write(1, "00 01", 5);
	//escreve a primeira entrada, porque o loop inicia no 2 de posição 2
	
	while (posicao1 < 100 && posicao2 < 100)
	{ //enquanto a p1 e a p2 forem até 99
		write(1, ", ", 2);
		
		caracter = posicao1 / 10 + '0'; 
		// o caracter é o p1 / 10, assim MÚLTIPLOS DE 10
		// 1 / 10 = 0
		// 10 / 10 = 0
		// 20 / 10 = 2
		// 30 / 10 = 3
		// 40 / 10 = 4
		// 50 / 10 = 5
		// 60 / 10 = 6
		// 70 / 10 = 7
		// 80 / 10 = 8
		// 90 / 10 = 9
		ft_putchar(caracter);
		
		caracter = posicao1 % 10 + '0';
		// o resto da divisão por 10 causa q...
		// 1 % 10 = 1
		// 2 % 10 = 2
		// 20 % 10 = 3
		// 30 % 10 = 4
		
		ft_putchar(caracter);
		write(1, " ", 1);
		caracter = posicao2 / 10 + '0';
		
		ft_putchar(caracter);
		caracter = posicao2 % 10 + '0';
		
		ft_putchar(caracter);
		// var++ retorna e incrementa
		// ++var incrementar e retorna
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
}