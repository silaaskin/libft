/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:28:00 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:57:43 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t i;
    i = 0;
    const unsigned char *s = (const unsigned char *)s1;
    const unsigned char *p = (const unsigned char *)s2;
    
    while (s[i] && p[i] && s[i] == p[i] && i < n )
	{
        i++;
	}
	return (s[i] - p[i]);
    
 }