/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:18:32 by saskin            #+#    #+#             */
/*   Updated: 2024/10/22 15:22:00 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	int		a;

	i = 0;
	result = NULL;
	a = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + a));
	while (s[i])
	{
		if (s[i] == (char)c)
			result = (char *)&s[i];
		i++;
	}
	return (result);
}
