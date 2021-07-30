/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-de <adias-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:17:50 by adias-de          #+#    #+#             */
/*   Updated: 2021/07/29 19:30:49 by adias-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize_rules(char *cur, char *prev);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		capitalize_rules(&str[i], &str[i - 1]);
		i++;
	}
	return (str);
}

void	capitalize_rules(char *cur, char *prev)
{		
	if (*prev >= 'A' && *prev <= 'Z')
		return ;
	if (*prev >= 'a' && *prev <= 'z')
		return ;
	if (*prev >= '0' && *prev <= '9')
		return ;
	if (*cur >= 'a' && *cur <= 'z')
		*cur = *cur - 32;
}
