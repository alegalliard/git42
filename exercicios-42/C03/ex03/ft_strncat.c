/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:24:44 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/30 21:29:36 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i_dest;

	i = 0;
	i_dest = 0;
	while (dest[i_dest])
		i_dest++;
	while (src[i] && i < nb)
		dest[i_dest++] = src[i++];
	dest[i_dest] = '\0';
	return (dest);
}
