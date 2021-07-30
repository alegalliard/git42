/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:49:00 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/30 21:23:09 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i_src;

	i = 0;
	i_src = 0;
	while (dest[i])
		i++;
	while (src[i_src])
	{
		dest[i] = src[i_src];
		i++;
		i_src++;
	}
	src[i] = '\0';
	return (dest);
}
