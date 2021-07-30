/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:30:40 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/30 21:59:11 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	i_find;

	i = 0;
	i_find = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while (str[i_find + i] == to_find[i_find])
		{
			if (!to_find[i_find + 1])
				return (str + i);
			i_find++;
		}
		i++;
		i_find = 0;
	}
	return (0);
}
