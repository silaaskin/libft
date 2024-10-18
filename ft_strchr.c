/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:11:31 by saskin            #+#    #+#             */
/*   Updated: 2024/10/15 21:45:36 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    unsigned int i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
        {
            return (char *)(s+i);
        }
        i++;
    }
    return NULL;
}
