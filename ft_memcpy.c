/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:25:13 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 21:11:33 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    i = 0;
    if(!dst && !src)
    return NULL;
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    while(i < n)
    {
        d[i] = s[i];
        i++; 
    } 
    return dst;
}


int main()
{
	char *str = NULL;
    //ft_memcpy(str, str1, 0);
    printf("%s\n", str);

}