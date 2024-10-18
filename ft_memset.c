/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:15:27 by saskin            #+#    #+#             */
/*   Updated: 2024/10/18 19:17:57 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;
     unsigned char	*s = (unsigned char *)b;
    while(i < len)
    {
        *(s + i) = (unsigned char)c;
        i++;
    }
    return (b);
}