/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:28:14 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:57:41 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    const unsigned  char *p = (const unsigned  char *)s;
    while(p[i] && i < n)
    {
        if(p[i] == (unsigned char)c)
        return (void *)(p + i);
    i++;
    } 
    return 0;
}

