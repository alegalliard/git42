/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:46:29 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/18 20:01:30 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int o);

void	rush(int x, int y)
{
	int	i;
	int	o;

	i = 0;
	while (i < y)
	{
		o = 0;
		while (o < x)
		{
			ft_putchar(x, y, i, o);
			o++;
		}
		i++;
		write(1, "\n", 1);
	}
}
