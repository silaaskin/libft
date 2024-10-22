/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:57:37 by saskin            #+#    #+#             */
/*   Updated: 2024/10/22 20:22:12 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	int				i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	p = (char *)malloc((len	 + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}

