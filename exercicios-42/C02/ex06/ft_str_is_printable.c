/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:46:13 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/28 13:59:20 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] < 32 || str[0] > 126)
			return (0);
		str++;
	}
	return (1);
}