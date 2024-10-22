/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:43:04 by saskin            #+#    #+#             */
/*   Updated: 2024/10/21 16:14:19 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		res[i++] = ft_substr(s, 0, j);
		s += j;
	}
	res[i] = NULL;
	return (res);
}
