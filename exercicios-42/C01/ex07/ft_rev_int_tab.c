/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 00:50:56 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/26 01:29:09 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		low;
	int		high;
	int		temp;

	low = 0;
	high = size - 1;
	while (low < high)
	{
		temp = tab[low];
		tab[low] = tab[high];
		tab[high] = temp;
		low++;
		high--;
	}
}
