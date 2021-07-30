/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:21:18 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/27 18:38:00 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
