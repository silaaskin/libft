/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:27:27 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 19:25:03 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	lenght;
	int				i;

	i = 0;
	lenght = 0;
	while (s[lenght])
		lenght++;
	str = (char *)malloc((lenght + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
char	ft_to_upper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
