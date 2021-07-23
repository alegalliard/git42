/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:43:30 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/22 10:33:38 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	montar_posicoes(int *v, int *v_bool, int n);
void	combinar(int *v, int *v_bool, int n);

int resto(int r)
{
	return r%10;
}

int divide(int r)
{
	return r/10;
}

void	ft_print_combn(int n)
{

	char	caracter;
	int		posicao[2];
	posicao[0] = 0;
	posicao[1] = 0;
	int max = 100;
	int atual1 = 0;
	int atual2 = 0;

	while (posicao[0] < max && posicao[1] < max)
	{
		posicao[1] = posicao[0]/10 + 1;

		if(posicao[0]%10 == 0)
		{
			++posicao[0];
		}

		if(posicao[1]/10 == 0)
		{
			posicao[1] = max;
		}
		
		caracter = posicao[0]/10 + '0';
		ft_putchar(caracter);
		

		caracter = posicao[1]%10 + '0';
		ft_putchar(caracter);

		posicao[0]++;
		write(1, " ", 1);
	}
	
}


/*


void	ft_print_combn(int n)
{

	int v[n]; //vetor
	int v_bool[n]; // o elemento está presente?

	
	montar_posicoes(v, v_bool, n);
	//ft_putchar('0'+v[2]);
	combinar(v, v_bool, n);
	
}


void	combinar(int *v, int *v_bool, int n)
{
	int i; //índice
	int tam_v; // tamanho dos elementos
	tam_v = n;
	i=0;

	ft_putchar('0' + tam_v);
	
	if(i == tam_v)
	{
		int j;
		j = 0;
		
		while(j < tam_v)
		{
			if(v_bool[j] == 0)
			{
				ft_putchar('0'+j);
			}
			j++;
		}
	}
	// else
	// {
	// 	v_bool[i] = 1;
	// 	i++;
	// 	combinar(v, v_bool, tam_v);
	// 	v_bool[i] = 0;
	// 	i++;
	// 	combinar(v, v_bool, tam_v);
	// }
}

void	montar_posicoes(int *v, int *v_bool, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		v[i] = i;
		v_bool[i] = 0;
		i++;
	}
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_combn(2);
}
