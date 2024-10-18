/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:57:37 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:59:22 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{

    if(s == NULL)
        return NULL;
    char *p;
    int i;
    int lenght;
    lenght = 0;
    i = 0;
    while(s[lenght])
    lenght++;
    p = (char *)malloc((lenght + 1) * sizeof(char));
    if(!p) 
        return NULL;
    if(start >= lenght)
        return NULL;
    if(len >= lenght - start)
        len = lenght - start;
    strlcpy(p,s + start,len + 1);
    return p;

}
