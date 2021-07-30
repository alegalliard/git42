/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:32:50 by julrodri          #+#    #+#             */
/*   Updated: 2021/07/18 20:30:28 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int o )
{
	char	letra;

	letra = ' ';
	if ((o == 0 || o == x - 1) && i != 0 && i != y - 1)
	{
		letra = '|';
	}
	else if (o == 0 || o == x - 1)
	{
		letra = 'o';
	}
	else if (o != 0 && o != x - 1 && (i == 0 || i == y - 1))
	{
		letra = '-';
	}
	write(1, &letra, 1);
}
