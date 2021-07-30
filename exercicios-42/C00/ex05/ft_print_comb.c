/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:28:33 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/20 00:48:23 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	virgula_espaco(int num1, int num2, int num3);
void	sequencia(int num1, int num2, int num3);

void	ft_print_comb(void)
{
	int		num1;
	int		num2;
	int		num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				sequencia(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	virgula_espaco(int num1, int num2, int num3)
{
	if (!(num1 == 7 && num2 == 8 && num3 == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	sequencia(int num1, int num2, int num3)
{
	ft_putchar('0' + num1);
	ft_putchar('0' + num2);
	ft_putchar('0' + num3);
	virgula_espaco(num1, num2, num3);
}
