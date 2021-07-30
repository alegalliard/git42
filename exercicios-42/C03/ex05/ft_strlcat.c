/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:40:01 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/30 21:53:13 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_src;
	unsigned int	count_dest;
	unsigned int	total;

	i = 0;
	count_src = 0;
	count_dest = 0;
	total = 0;
	while (src[count_src])
		count_src++;
	while (dest[count_dest])
		count_dest++;
	total = count_dest + count_src;
	if (size > count_dest)
	{
		while (count_dest < size - 1 && src[i])
			dest[count_dest++] = src[i++];
		dest[count_dest] = '\0';
		return (total);
	}
	return (size + count_src);
}
