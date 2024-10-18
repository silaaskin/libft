/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:18:32 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:51:51 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	i = 0;
	char *result = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = (char *)&s[i];
		i++;
	}
	return result;
}
