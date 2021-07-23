/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:52:20 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/22 11:56:50 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c);
void	ft_print_position(char *character, int *position1);

void	ft_print_comb2(void)
{
	char	character;
	int		position1;
	int		position2;

	position1 = 0;
	position2 = 2;
	write(1, "00 01", 5);
	while (position1 < 100 && position2 < 100)
	{
		// write(1, ", ", 2);
		// character = position1 / 10 + '0';
		// ft_putchar(character);
		// character = position1 % 10 + '0';
		// ft_putchar(character);
		// write(1, " ", 1);
		// character = position2 / 10 + '0';
		// ft_putchar(character);
		// character = position2 % 10 + '0';
		// ft_putchar(character);
		ft_print_position(character, position1);
		++position2;
		if (position2 == 100)
			position2 = ++position1 + 1;
	}
}

void	ft_print_position(char *character, int *position1)
{
	
	write(1, ", ", 2);
	*character = position1 / 10 + '0';
	ft_putchar(character);
	&character = position1 % 10 + '0';
	ft_putchar(character);
}

void	ft_putchar(char *c)
{
	write (1, &c, 1);
}


int main(void)
{
	ft_print_comb2();
}