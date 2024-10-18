/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:46:40 by saskin            #+#    #+#             */
/*   Updated: 2024/10/16 18:57:18 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
    char * ptr;
    ptr = malloc((count * size));
    if(ptr == NULL)
        return NULL;
    ft_bzero(ptr, count * size);
    return (ptr);
}